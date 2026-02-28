#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

int main(void) {

  int count = enter_number();
  int *numbers = malloc(count * sizeof(int));

  if (numbers == NULL) {
    printf("Fatal memory allocation error");
    return 1;
  }

  populate_array(0, count, numbers);
  print_array(count, numbers);

  printf("Enter two more numbers...\n");
  int count2 = enter_number();
  int count3 = enter_number();

  int new_count = count + count2 + count3;
  int new_size = new_count * sizeof(int);
  int *temp = realloc(numbers, new_size);

  if (temp != NULL) {
    numbers = temp;
  } else {
    printf("Reallocation failed! Terminating program...\n");
    free(numbers);
    return 1;
  }

  populate_array(count, new_count, numbers);
  print_array(new_count, numbers);

  //free(numbers);

  return 0;
}
