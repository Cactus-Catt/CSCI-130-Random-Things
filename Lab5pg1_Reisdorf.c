/*Lab 5 - Reisdorf - CSCI 130, Spring 2023*/


#include <stdio.h> //Question 1//

int main(void) {

   int i , num, arr[100], smallest;

    printf("Enter the number of integers:\n");
    scanf("%d", &num);
 
    printf("Enter the integers:\n") ;
    for(i=0; i<num; i++)
    {
        scanf("%d",&arr[i]) ;
    }
    
    smallest=arr[0];
    for(i=1; i<num; i++)   
    {
        if(arr[i] < smallest)
        {
            smallest=arr[i];
        }
    }
    printf("The smallest of the %d integers you entered is %d!",num,smallest);
	
	return 0;
}
	
	
#include <stdio.h> //Question 2//
 
int main (void) {
   
   int i;
   long factorial = 1;

   printf("Factorials of the numbers 1 to 10! \n");

   for(i = 1; i <= 10; ++i)
   {
    factorial*=i;
    printf("%d   %ld\n", i, factorial);
   }
  
  return 0;
}