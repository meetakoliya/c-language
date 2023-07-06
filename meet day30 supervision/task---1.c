#include<stdio.h>
int main()
{
	FILE *p;
	
	char name[20];
	
	p=fopen("demo.txt","w");
	
	if(p==NULL)
	{
		printf("error");
	}
	else
	{
		printf("enter text :");
		gets(name);
		
		fputs(name,p);
	
		fclose(p);
	}
	return 0;
}
