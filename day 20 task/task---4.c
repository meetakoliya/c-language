#include<stdio.h>
int main() {
	 
	 int n,m;
	 
	 printf("enter size of row:");
	 scanf("%d",&m);
 	 
	 printf("enter size of colum:");
	 scanf("%d",&n);
	 
	 int i,j;
	 
	 int a[m][n];
	 
	 for(i=0;i<m;i++){
	 	for(j=0;j<n;j++){
		 
	 	printf("enter value[%d][%d]:",i,j);
	 	scanf("%d",&a[i][j]);
	 	
	 }
}
	 int b[m][n];
	 
	 for(i=0;i<m;i++){
	 	for(j=0;j<n;j++){
		 
	 	printf("enter value[%d][%d]:",i,j);
	 	scanf("%d",&b[i][j]);
	 	
	 }
}

	 int sum[m][n];
	 
	 for(i=0;i<n;i++){
	 	for( j=0;i<n;j++){
	 
   sum[i][j]=a[i][j]+b[i][j];
}
}
   
   
    printf(" addition of array  : %d", sum[i]);

    return 0;
}
