#include<stdio.h>
#include<string.h>

int main(){
	
	char a[20],i;

	printf("enter value:");
	scanf("%s",a);
	
    if(a[0]>='a' && a[0]<='z'){
    		a[0]-=32;
	}

    for(i=1;i<strlen(a);i++){
         if(a[i]>='A' && a[i]<='Z'){
    	a[i]+=32;
		}
	}
		printf("%s",a);
		
	return 0;
}
