#include<stdio.h>
#include<string.h>

int main(){
	
	char a[10];
	char b[10];
	
	printf("enter value:");
	scanf("%s",a);
	
	strcpy(b,a);
	
	strrev(a);
	
	int i=strcmp(a,b);
	
	if(i==0)
	{
		printf("\nvalue is palindrome value");
	}
	else
	{
		printf("\nvalue is not palindrome value");
	}
	
		return 0;
}
