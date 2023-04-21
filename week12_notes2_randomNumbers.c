#include <stdio.h>
#include <stdlib.h>

int main (void){
	int i;
	for (i=0; i<5; i++){
		
		printf("%d ", (rand() % (-5-(-15)+1) + (-15)));
		
	
	/*   
	     printf("%d ", (rand() % (10-0+1))+0);       // random number from 0-10
	     printf("%d ", (rand() % (100-50)+1)+50);    // 50 from 100 
	     printf("%d ", (rand() % (40-25)+1)+25);     // 25 to 40
	     printf("%d ", (rand() % (23-11)+1)+11);     //11 to 23
	     printf("%d ", (rand() % (5-(-5))+1)+(-5));  // -5 to 5
	     printf("%d ", (rand() % (-5-(-15)+1) + (-15))); // -5 to -15
	     
	     can simplify by putting symbols together ie -5+15+1-15
	*/
	
}

	return 0;
}

//video paused at 16:30
