#include<stdio.h>

int main(){
	 
	 int n,m;
	 int Sum=0;
	 
	printf("enter size of row:");
	scanf("%d",&m);
 	 
	printf("enter size of colum:");
	scanf("%d",&n);
	
	 int a[m][n];
	
	 int i,j;
	 
	 for(i=0;i<m;i++){
	 	for(j=0;j<n;j++){
		 
	 	printf("enter value[%d][%d]:",i,j);
	 	scanf("%d",&a[i][j]);
	 	
	 }
}
	 	 for(i=0;i<m;i++){
	 	 	
	 	for(j=0;j<n;j++){
	 	 printf("%d",a[i][j]);
}
}
for(i=0; i <m; i++)
    {
        
        for(j=0; j<n; j++)
        {
            Sum = Sum + a[i][j];
        }
        printf("The Sum of Elements of a Rows in array =  %d \n", Sum );
    }


	
	return 0;
}
