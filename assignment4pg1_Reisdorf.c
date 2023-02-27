/* Assignment 4 - Reisdorf, CSCI 130, Online, Spring 2023 */

#include <stdio.h>

int main(void) {


int num1;

  printf("Please enter a 5 digit number and I will separate each number with a space!:\n");
  scanf("%d", &num1);

  int digit1 = num1 / 10000;
  int rem1 = num1 % 10000;
  int digit2 = rem1 / 1000;
  int rem2 = rem1 % 1000;
  int digit3 = rem2 / 100;
  int rem3 = rem2 % 100;
  int digit4 = rem3 / 10;
  int digit5 = rem3 % 10;

  printf("%d %d %d %d %d\n", digit1, digit2, digit3, digit4, digit5);


  return 0;
}