#include<stdio.h>

int main(){
	 
	 int n,m;
	 
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
      printf("\n");
	 }
	         int sum=0;
for (i=0; i<m; ++i) {
            
        
 
        for(j=0; j<n; j++)
        {
        	if(i==j){
			
            sum = sum + a[i][j];
        }
            
    }
}
        printf("\ndiagonal elements sum is = %d\n", sum);

	return 0;
}
