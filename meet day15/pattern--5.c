#include<stdio.h>
int main()
{
	int r,c;
	
	for(r=5;r>=1;r--)
	{
		for(c=r;c<=5;c++)
		{
			printf("%d",c);
		}
	    printf("\n");	
	}
	return 0;
}
