#include<stdio.h>
int main()
{
    int value;
 
    printf("Enter the value :");
    scanf("%d",&value);
 
    if(value %2 == 0)
    {
     printf("Even number\n");
    }  
    else
    {
     printf("Odd number\n");	
	}
   return 0;
}
