/* Assignment 6 - Reisdorf, CSCI 130 Spring 2023
A calculator program that asks for an operator then two numbers and prints the answer, 
working with switch statments and breaks */

#include <stdio.h>
int main(void){
	
	char operator;
    int firstNum, secondNum;
	
	printf("Enter an operator (ie. +, -, *, /): \n");
	scanf("%c", &operator);
	
	printf("Enter the first number: \n");
	scanf("%d", &firstNum);
	
	printf("Enter the second number: \n");
	scanf("%d", &secondNum);
	
	switch(operator){
	case '+':
	printf("The sum is: %d", firstNum + secondNum);
	break;
	
	case '-':
	printf("The difference is: %d", firstNum - secondNum);
	break;
	
	case '*':
	printf("The product is: %d", firstNum * secondNum);
	break;
	
	case '/':
	printf("The quotient is: %d", firstNum / secondNum);
	break;

	default: 
	printf("Operator is not correct! Sad panda.");
}
return 0;
}

