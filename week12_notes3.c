#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){
	int i;
	srand(time(0)); //truly random
	for (i=0; i<5; i++){
		
		printf("%d ", (rand() % (-5+15) +1) - 15);
	}
	return 0;
}

