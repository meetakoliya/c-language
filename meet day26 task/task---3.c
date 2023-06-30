#include<stdio.h>

void len(char arr[])
{
    int i;
    for(i=0 ; arr[i]!=NULL ; i++)
	{
		printf("%d",i);
    }	
}

int main()
{
  	char arr[100]="red";
  	 
    printf("Enter name :");
	
    gets(arr);
    len(arr);
  	
  	return 0;
}
