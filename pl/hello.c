#include <stdio.h>

int main(void) {
  
  int a[] = {1, 2, 3, 4, 5};

  printf("hello\n");
  printf("Size of array a : %lu \n", sizeof(a)/sizeof(a[0]));  
  printf("Storage size for int : %lu \n", sizeof(int));  

  return 0;
}
