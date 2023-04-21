/* Assignment 9 CSCI 130 - Reisdorf - A program that determines if a pair of numbers is
a multiple of the first number, working with user-defined functions */

#include <stdio.h>

int main (void){
	
	int num1, num2, result;

    printf("Enter two numbers and I will tell you if the second number is a multiple of the first number!\n");

    do {
        printf("Enter the two numbers with a space inbetween: ");
        scanf("%d %d", &num1, &num2);

        if (num1 != 0 && num2 != 0) {
            result = multiple(num1, num2);

            if (result) {
                printf("%d is a multiple of %d\n", num2, num1);
            } else {
                printf("%d is not a multiple of %d\n", num2, num1);
            }
        }
    } while (num1 != 0 && num2 != 0);

    return 0;
}


int multiple(int num1, int num2) {
    if (num2 % num1 == 0) {
        return 1; 
    } else {
        return 0;
    }
}


