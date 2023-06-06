#include<stdio.h>
int main()
{
	int a,b;
	printf("enter A:");
	scanf("%d",&a);
	
	printf("enter B:");
	scanf("%d",&b);
	
	a>b ? printf("A is max") : printf("B is max");
	
	return 0;
}
