#include<stdio.h>
#include<string.h>

int main(){
	
	char a[20],i;

	printf("enter value:");
	scanf("%s",a);

    for(i=0;i<=strlen(a);i++){
    	if(a[i]>='a' && a[i]<='z'){
    		a[i]-=32;
		}
		else if(a[i]>='A' && a[i]<='Z'){
    		a[i]+=32;
		}
	}
		printf("%s",a);
		
	return 0;
}
