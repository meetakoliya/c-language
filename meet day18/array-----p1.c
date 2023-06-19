#include<stdio.h>

int main(){
	 
	 int i,n;
	 printf("enter size of array:");
	 scanf("%d",&n);
	 
	 int a[n];
	 for(i=0;i<n;i++){
	 	 printf("enter value[%d]:",i);
	 	scanf("%d",&a[i]);
	 }
	 	 for(i=0;i<n;i++){
	 	 printf("%d\t",a[i]);
	 	
	 }
	
	
	
	return 0;
}
