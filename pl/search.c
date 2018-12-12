#include <stdio.h>

int linearSearch(int arr[], int n, int x) 
{
  // linear search: O(n) 
  int i; 

  for (i = 0; i < n; i++) {
    if (arr[i] == x) {
      printf("%u is found at the index of %u\n", x, i); 
      return i; 
    }
  }

  printf("%u is not found\n", x);   
  return -1; 
} 

int binarySearch(int arr[], int left, int right, int x) 
{
   // binary search, recursive!

   if (right >= left) 
   { 
        int mid = left + (right - left)/2; 
  
        // If the element is present at the middle  
        // itself 
        if (arr[mid] == x)   
            return mid; 
  
        // If element is smaller than mid, then  
        // it can only be present in left subarray 
        if (arr[mid] > x)  
            return binarySearch(arr, left, mid-1, x); 
  
        // Else the element can only be present 
        // in right subarray 
        return binarySearch(arr, mid+1, right, x); 
   } 
  
   // We reach here when element is not  
   // present in array 
   return -1; 
}

int main(void) {
  
  int a[] = {191, 20, 31, 42, 59, 100, 157};
  int b[] = {2, 5, 9, 13, 59, 157, 211};
  int x = 59;
  int y = 99;

  int result = -1;

  // test 1
  result = linearSearch(a, sizeof(a)/sizeof(a[0]), x);
  // test 2
  result = linearSearch(a, sizeof(a)/sizeof(a[0]), y);

  // test 3
  result = binarySearch(b, 0, sizeof(b)/sizeof(b[0])-1, x);
  if (result == -1) {
    printf("%u is not found\n", x);   
  } else {
    printf("%u is found at index of %u\n", x, result);   
  }

  return 0;
}
