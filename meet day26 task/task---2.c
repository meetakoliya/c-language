#include<stdio.h>

sum(int meet[],int size)
{
	int c=0,i;
	
	for(i=0;i<size;i++)
	{
		c += meet[i];
	} 
	printf("sum : %d",c);
}

int main()
{
	int n;
	
	printf("enter value :");
	scanf("%d",&n);
	
	int array[n],i;
	
	for(i=0;i<n;i++)
	{
		printf("enter value [%d] :",i);
		scanf("%d",&array[i]);
	}
	sum(array,n);
	
	return 0;
}
