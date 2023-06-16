#include<stdio.h>

int main(){
	
	int r,c,b;
	for(r=5 ; r>=1 ; r--){
			for(c=1 ; c<=r ; c++){
			printf("%d",c);
		}
		
		for(b=5;b>r;b--){
			printf("  ");
		}
		for(c=r ; c>=1 ; c--){
			printf("%d",c);
		}
		printf("\n");
	}
	
		for(r=2 ; r<=5 ; r++){
			for(c=1 ; c<=r ; c++){
			printf("%d",c);
		}
		
		for(b=5;b>r;b--){
			printf("  ");
		}
		for(c=r ; c>=1 ; c--){
			printf("%d",c);
		}
		printf("\n");
	}
	
	return 0;
}
