#include <stdio.h> /* notes for csci 130 4/4/2023 */
#include <stdlib.h> /*rand() generates a num from RAND_MAX,min of 32767*/

int main (void){ //program to generate some random numbers//
int i;
for (i=0; i<5; i++){
	printf("%d ", rand());
}
printf("\nRAND_MAX = %d", RAND_MAX); //ie 32767// 
	return 0;
	
}
