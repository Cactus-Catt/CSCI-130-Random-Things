/* Lab 10, Question 1 - Reisdorf */

#include <stdio.h> // A program to calculate the legth of a hypotenuse when the other two sides are given 
#include <math.h>
double hypotenuse(double side1, double side2);

int main (void){
	double side1, side2, hyp;
	
	printf("Enter the length of the first side of the hypotenuse: \n");
	scanf("%lf", &side1);
	
	printf("Enter the length of the second side: \n");
	scanf("%lf", &side2);
	
	hyp = hypotenuse(side1, side2);
	
	printf("The length of the hypotenuse is: %.2lf\n", hyp);
	
	return 0;
	
}

double hypotenuse(double side1, double side2){
	return sqrt(side1 * side2 + side1 * side2);
}

