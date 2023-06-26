#include<stdio.h>

int main(){
	
	char v;

	printf("enter value:");
	scanf("%c",&v);
	
    if(v>='A' && v<='Z'){
    	v+=32;
		}
		printf("%c",v);
		
	return 0;
}
