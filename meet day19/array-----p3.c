#include<stdio.h>

int main()
{
	
 int m,n;

 printf("Enter row size:");
 scanf("%d",&m);
 
 printf("Enter column size:");
 scanf("%d",&n);

 float a[10][10]; 
  
 printf("Enter value :\n");
 
 int i,j;
 
 for(i=0; i<m; i++)
 {
  for(j=0; j<n; j++)
  {
   printf("a[%d][%d]=",i,j);
   scanf("%f",&a[i][j]);
  }
 }
 
float sum=0.0, avg;
 
 for(i=0; i<m; i++)
 {
  for(j=0; j<n ;j++)
  {
   sum = sum+a[i][j];
  }
 }

 avg = sum/(m*n);
 
 printf("Average of array is  = %f", avg);

}

