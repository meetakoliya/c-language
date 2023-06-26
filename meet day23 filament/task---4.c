#include<stdio.h>

int main(){
	
	char v;

	printf("enter value:");
	scanf("%c",&v);
	
    if(v>='a' && v<='z'){
    	v-=32;
		}
		printf("%c",v);
		
	return 0;
}
