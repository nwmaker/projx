#include <stdio.h>

int main(void) {
  int nums[] = {2, 7, 11, 15};
  int target = 9;

  for (int i = 0; i < sizeof(nums); i++) {
    for (int j = i+1; j < sizeof(nums); j++) {
      if ((nums[i] + nums[j]) == target) {
        printf("index1 = %i\n", i);  
        printf("index2 = %i\n", j);  
        break;
      }
    } 
  }

  return 0;
}
