#include<stdio.h>

int main(){
	 
	 int n;
	 int largest;
	 int s_l;
	 
	 printf("enter size of array:");
	 scanf("%d",&n);
	 
	 int a[n];
	 
	 int i;
	 
	 for(i=0;i<n;i++){
	 	printf("enter value[%d]:",i);
	 	scanf("%d",&a[i]);
	 }
	 	 for(i=0;i<n;i++){
	 	 	if(a[i]<0){
			  
	 	 printf("%d\t",a[i]);
	 }
	 }
	    largest= a[0];
    for (i=0; i<n; i++) {
        if (a[i]>largest) {
            largest = a[i];
        }
    }
    s_l = a[0];
    for (i=1; i<n; i++) {
        if (a[i]>s_l && a[i]<largest)
            s_l = a[i];
    }
    printf("\nsecond largest number is %d",s_l);
    
	return 0;
}
