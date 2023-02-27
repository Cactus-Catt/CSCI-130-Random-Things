/* Assignment 5 - Reisdorf, CSCI 130, Spring 2023. 
Write a program that prints a diamond shape using the while loop
and nested controls */

#include <stdio.h> 
 int main(void)
{
    int i, j, k;
    
	k = 5;
    i = 1;
    while(i <= k)
	{
     j = 1;
        while(j <= k - i)
        {
            printf(" ");
            j++;
        }
 

        j = 1;
        while(j <= i)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
 
    i = k - 1;
    while(i >= 1)
    {
    
        j = 1;
        while(j <= k - i)
        {
            printf(" ");
            j++;
        }
 

        j = 1;
        while(j <= i)
        {
            printf("* ");
            j++;
        }
        printf("\n");
        i--;
    }
    return 0;
}
