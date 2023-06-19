#include<stdio.h>
int main() {
    	 
	 int i,n;
	 printf("enter size of array:");
	 scanf("%d",&n);
	 
	 int a[n];
	 for(i=0;i<n;i++){
	 	 printf("enter value[%d]:",i);
	 	scanf("%d",&a[i]);
	 }
    
    int sum=0;
	int average;
    
    for( i=0;i<n;i++)
	{    
	sum += a[i];
    }
    average = sum/n;
    
	printf("The average of given numbers : %d", average);

    return 0;
}
