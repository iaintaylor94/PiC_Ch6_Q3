/* Division of one number by a second. */

#include <stdio.h>

int main(void) {

  // Get numbers from terminal
  int num1, num2;
  printf ("Enter your numbers: ");
  scanf ("%d %d", &num1, &num2);

  // Test for division by zero
  if (num2 == 0) {
    printf ("Error: Division by zero!\n");
  }
  else {
    // Calculate num1 / num2
    double result = (double) num1 / num2;
    // Print result to three decimal places
    printf ("%d divided by %d is %.3f\n", num1, num2, result);
  }
  
  return 0;
}