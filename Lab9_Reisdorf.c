/*Lab 9 - CSCI 130 - Reisdorf - A program that rolls a six-sided dice 100 times and prints 
the results of each roll, and then prints the amount of times each side of the dice appears */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) { 
	int dice[7] = {0, 0, 0, 0, 0, 0, 0};
	int roll, i;
	srand(time(0));
	
	for (i = 1; i < 101; i++){
		roll = (rand() % 6) + 1;
		printf("Roll %d: %d\n", i, roll);
		dice[roll]++;
	}
	printf("\nHere is how many times each side of the dice appeared!\n");
	for (i = 1; i <= 6; i++){
		printf("%d appeared %d times!\n", i, dice[i]);
	}
return 0;
}
