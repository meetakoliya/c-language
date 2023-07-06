#include<stdio.h>
int main()
{
	FILE *p;
	
	char name[20];
	
	p=fopen("demo.txt","r");
	
	if(p==NULL)
	{
		printf("error");
	}
	else
	{
		fgets(name,20,p);
		
		puts(name);

	}
	return 0;
}
