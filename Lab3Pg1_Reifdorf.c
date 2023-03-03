/* Lab 3 - Reisdorf  - CSCI 130, online, Spring 2023 */

#include <stdio.h>

int main(void)

// Question 1 //

{
	int x1, y2, z3;
	
	printf("Enter 3 numbers with a space between each number : ");
	scanf("%d%d%d", &x1, &y2, &z3);

  // Find the smallest number and print //
     if(x1<y2 && x1<z3) {
        printf("\n%d is the smallest number",x1);
    }
    else if(y2<z3){
        printf("\n%d is the smallest number",y2);
    }
    else{
        printf("\n%d is the smallest",z3);
    }

  // Find the largest and print the result //
    if(x1>y2 && x1>z3){
        printf("\n%d is largest",x1);
    }
    else if(y2>z3){
       printf("\n%d is largest",y2);
    }
    else{
      printf("\n%d is largest",z3);
      
      }
printf("\n");
  

// Question 2 //

  int number;

  printf( "Enter a number and I'll tell you if it's Odd or Even!: \n" );
  scanf( "%d", &number );

  if ( number % 2 == 0 ) {
    printf( "%d is an even number.\n", number );
  } 
  
  else {
    printf( "%d is an odd number. \n", number );
  }
 
  printf("\n");


// Question 3 // 

  int num1, num2;

  printf( "Enter two numbers (with a space inbetween)\n and I'll tell you if the the first number is a\n multiple of the second number!: \n" );
  scanf( "%d%d", &num1, &num2 );

  if ( num2 % num1 == 0 ) {
    printf( "%d IS a multiple of %d\n", num2, num1 );
  } 
  
  else {
    printf( "%d is NOT a multiple of %d\n", num2, num1 );
  }
  printf("\n");


  // Question 4 //

int num5;

  printf("Enter a number and I'll tell you if that number is multiple of 5\n and if that number is odd or even!\n" );
  scanf( "%d", &num5 );

  if ( num5 % 5 == 0 ) {
    printf( "%d IS a multiple of 5!\n", num5 );
  }
  else {
    printf( "%d is NOT a multiple of 5!\n", num5 );
  }

 //odd or even?!// 
 if ( num5 % 2 == 0 ) {
    printf( "%d is an even number.\n", num5 );
  } 
  
  else {
    printf( "%d is an odd number. \n", num5 );
  }
 

  return 0;
}

