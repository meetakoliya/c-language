#include<stdio.h>

void sum(int a,int b)
{
	printf("sum : %d",a+b);
}

void min(int a,int b)
{
	printf("sum : %d",a-b);
}

void mulit(int a,int b)
{
	printf("sum : %d",a*b);
}

void div(int a,int b)
{
	printf("sum : %d",a/b);
}

int main()
{
	while(1){
	
	
	int a,b;
	char sign;

    printf("enter first value :");
    scanf("%d",&a);
	
	printf("enter second value :");
    scanf("%d",&b);
    
    printf("+,-,*,/ \n\n");
    
    printf("make your selection : ");
    scanf(" %c",&sign);
    
    
    switch(sign)
    {
    	case '+':
    		sum(a,b);
    		break;
    	
		case '-':
    		min(a,b);
    		break;
			
		case '*':
    		mulit(a,b);
    		break;
			
		case '/':
    		div(a,b);
    		break;			
    	
	}
	
}
    
    return 0;
}
