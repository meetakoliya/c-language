#include<stdio.h>
int main()
{
	int i = 1;
	int n;
	
	printf("enter your number :");
	scanf("%d",&n);
	
	do
	{
		printf("%d\n",n);
	    n--;
	}
	while(n>=i);
	return 0;
}
