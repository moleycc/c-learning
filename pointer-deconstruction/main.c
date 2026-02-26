#include <stdio.h>

int main(void) {
  
  int x = 10;
  int *p_x = NULL;

  printf("The value of x is: %d\n", x);
  printf("The memory address of x is: %p\n", p_x);
  printf("The value stored at p_x is: %d\n", *p_x);

  printf("Enter a new value for x: ");
  scanf("%d", p_x);

  printf("The value at x is now: %d\n", x);

  return 0;
}
