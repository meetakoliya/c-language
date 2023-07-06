#include<stdio.h>
int main()
{
	FILE *p;
	
	char name[20];
	
	p=fopen("demo.txt","a");
	
	if(p==NULL)
	{
		printf("error");
	}
	else
	{
		printf("enter text :");
		gets(name);
		
		fputs(name,p);
		fputs("\n",p);
		fclose(p);
	}
	return 0;
}
