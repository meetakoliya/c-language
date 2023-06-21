#include<stdio.h>

int main(){
	 
	 int n;
	 printf("enter size of array:");
	 scanf("%d",&n);
	 
	 int a[n];
	 
	 int i;
	 
	 for(i=0;i<n;i++)
	 {
	 	printf("enter value[%d]:",i);
	 	scanf("%d",&a[i]);
	 }
	 	for(i=0;i<n;i++)
		 {
	 	 	if(a[i]<0)
			  {
			
			  printf("%d",a[i]);
	 	 	  
			printf(" negative elements ");
	          }
	     }
	
	return 0;
}
