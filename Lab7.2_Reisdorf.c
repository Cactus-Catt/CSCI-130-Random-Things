/* Lab 7 - Reisdorf - CSCI 130 Spring 2023*/

//Question 2 - a program that populates a 20 element array of unique numbers only//
#include <stdio.h>
int main(void) {
    
	int arr[20];
    int size = 0;
    int i;
    int input, unique;
    
	while(size < 20) {

        printf("Enter a number: ");
        scanf("%d", &input);
        unique = 1;
        for(i = 0; i < size; i++) {
            if(input == arr[i]) {
                unique = 0;
                printf("Duplicate value. Enter a new number.\n");
                break;
            }
        }
       
        if(unique) {
            arr[size] = input;
            size++;
        }
    }
   
    printf("\n Here are the number of unique elements!: ");
    for( i = 0; i < 20; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}
