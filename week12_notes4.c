#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 5

int main (void){
 	
	int i, numbers[SIZE];
 	srand(time(0));
 	
	 for (i=0; i < SIZE; i++){
 		numbers[i]=rand() % 1000+1;
	 }
	 for (i=0; i < SIZE; i++){
 		printf("%d  ", numbers[i]);
 }
    return 0;	
 }
 
