#include <stdio.h>

void print_array(int a, int *b) {
  printf("Your new output is: \n");
  for (int i = 0; i < a; i++) {
    printf("%d\n", b[i]);
  }
}

void populate_array(int a, int b, int *c) {
  for (int i = a; i < b; i++) {
    c[i] = i * 10;
  }
}

int enter_number() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  return num;
}
