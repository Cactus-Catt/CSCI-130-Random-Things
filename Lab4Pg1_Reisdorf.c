/* Lab 4 - Reisdorf - CSCI 130, online, Spring 2023 */

#include <stdio.h>

int main(void) {

  
  // Question 1 //

int power, num;

 power = 1;
 num = 4;

  while (power < 100) {
  power  = power * num;
  if (power < 100)
    printf("%d\n", power);
    }

  printf("\n");
 
  
  // Question 2 //

int num2, sum = 0, avg = 0, count = 0;
  
  printf("Enter 10 numbers!: \n");
  while (count < 10)
  {
  scanf("%d", &num2);
    sum = sum + num2;
    count = count + 1;
  }

  avg = sum / 10;
  printf("The average is %d\n", avg);
  
  printf("\n");
  

  // Question 3 // 

int gallons =  10 ;


  while (gallons <= 20)
    {
      double liters = gallons * 3.785;
      printf("%d = %.2lf liters \n", gallons, liters);
      gallons++;
      }

printf("\n");


  // Question 4 //

  double partsValue, bonusValue, earnings;

  printf("Enter the gross parts value of the last week and I'll tell you what your bonus is! $$$$: \n");

  scanf("%lf", &partsValue);

  earnings = 300 + 0.11 * partsValue;

  printf("You earned %.2lf dollars over the last week!\n", earnings);

  
  
  return 0;
}