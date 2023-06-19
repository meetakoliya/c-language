#include<stdio.h>

int main(){
	 
	 
	 int n,m;
	 printf("enter size of row:");
	 scanf("%d",&m);
 	 
	 printf("enter size of colum:");
	 scanf("%d",&n);
	 
	 int i,j,k;
	 int a[m][n];
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
for (i = 0; i < m; ++i) {
            
        
 
        for(j = 0; j < n; j++)
        {
        	if(i==j){
			
            sum = sum + a[i][j];
        }
      else if(i + j ==2){
      	   sum = sum + a[i][j];
	  }
         
            
    }
}
       
	int b;
	
	b=sum+k;
	 printf("\nMain crose elements sum is = %d\n", b);

	return 0;
}
