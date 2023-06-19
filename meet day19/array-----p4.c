#include<stdio.h>
int main() {
	 
	 int m,n,i,j,a[m][n],b[m][n],sum[m][n];
	 
	printf("enter size of row:");
	scanf("%d",&m);
 	 
	printf("enter size of colum:");
	scanf("%d",&n);
	 
	printf("enter 1st elements : \n");
	for(i=0;i<m;i++)
	{
	 	for(j=0;j<n;j++)
		{
		 
	 	printf("enter value[%d][%d]:",i+1,j+1);
	 	scanf("%d",&a[i][j]);
	 	
	    }
    }
	
	printf("enter 2st elements : \n"); 
	for(i=0;i<m;i++)
	{
	    for(j=0;j<n;j++)
		{ 
	 	printf("enter value[%d][%d]:",i+1,j+1);
	 	scanf("%d",&b[i][j]);
	 	
	    }
    }
	 
	for(i=0;i<m;i++)
	{
	 	for( j=0;i<n;j++)
		{
	    sum[i][j] = a[i][j]+b[i][j];
        }
    }
    
    printf(" addition of 2 elements  : ");
    for(i=0;i<m;i++)
    {
    	for(j=0;j<n;j++)
    	{
    	    printf("%d",sum[i][j]);
			if(j==n-1)
			{
				printf("\n\n");
			}	
		}
    }

    return 0;
}

