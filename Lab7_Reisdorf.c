/* Lab 7 - Reisdorf - CSCI 130 Spring 2023 */

//Question 1 - a progrom that read 20 integers and prints the number of positive, negative, odd, even and number of zeros//
#include <stdio.h>
int main(void) {
    
	int positive = 0, negative = 0, odd = 0, even = 0, zero = 0;
    int num;
    int i;
    
	printf("Enter 20 integers:\n");
    
	for (i = 0; i < 20; i++) {
        scanf("%d", &num);
        if (num > 0) {
            positive++;
        } else if (num < 0) {
            negative++;
        } else {
            zero++;
        }
        if (num % 2 == 0) {
            even++;
        } else {
            odd++;
        }
    }
    
    printf("Positive numbers: %d\n", positive);
    printf("Negative numbers: %d\n", negative);
    printf("Odd numbers: %d\n", odd);
    printf("Even numbers: %d\n", even);
    printf("Zeros: %d\n", zero);
    
	return 0;
}

