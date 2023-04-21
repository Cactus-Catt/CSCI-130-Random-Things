/* Lab 10, Question 2 - Reisdorf */

#include <stdio.h> // A program that uses a function called "cube" and calculates the cube of a given number
#include <math.h>
float cube(float num);

int main (void){
	float numbers [] = {1.0, 2.0, 3.0, 4.0, 5.0};
	int totalNumbers = sizeof(numbers) / sizeof(numbers[0]);
	int i;
	
	printf("The cubes of the given numbers are: \n");
	for (i = 0; i < totalNumbers; i++){
		float result = cube(numbers[i]);
		printf("%.2lf ^ 3 = %.2lf\n", numbers[i], result);
	}
	return 0;
}

float cube(float num){
	return num * num * num;
}

