#include <stdio.h>

void fizz() { printf("Fizz\n"); }
void buzz() { printf("Buzz\n"); }
void fizzbuzz() { printf("FizzBuzz\n"); }

int range() {
  int a;
  printf("Enter a number: ");
  scanf("%d", &a);
  return a;
}

int main(void) {

  int num = range();

  for (int i = 1; i <= num; i++) {
    if (i % 15 == 0) {
      fizzbuzz();
    } else if (i % 5 == 0) {
      buzz();
    } else if (i % 3 == 0) {
      fizz();
    } else {
      printf("%d\n", i);
    }
  }

  return 0;
}
