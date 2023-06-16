#include<stdio.h>
int main()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(k=i;k<=4;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%d",j);
		}
	    printf("\n");	
	}
	for(i=1 ; i<=5 ; i++)
	{
		for(k=1; k<=i; k++){
			printf(" ");
		}
		for(j=i+1; j<=5 ; j++){
			printf("%d",j);
		}
		printf("\n");
	}
	return 0;
}
