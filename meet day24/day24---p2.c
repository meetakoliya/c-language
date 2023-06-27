#include<stdio.h>

void div( int a)
{
    if(a%3==0 && a%5==0)
    {
        printf("->Number is divisible by 3 and 5");
    }
    else
    {
	    printf("->Number is not divisible by 3 and 5");
    }
}

int main()
{  

    int n;
   
    printf("enter the number:");
    scanf("%d",&n);
   
	div(n);
	
	return 0;
}
