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
    	 printf("enter size of array:");
	 scanf("%d",&n);
	 
	 int b[n];
	 for(i=0;i<n;i++){
	 	 printf("enter value[%d]:",i);
	 	scanf("%d",&b[i]);
	 }
	 int sum[n];
	 for(i=0;i<n;i++){
	 
	 
   sum[i]=a[i]+b[i];

      
    printf(" addition of 1D array  : %d", sum[i]);
}
    return 0;
}

