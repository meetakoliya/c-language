#include<stdio.h>
int main()
{
	int n,f=1,i;
	
    printf("\nEnter the number : ");
    scanf("%d",&n);
     
    for(i=1;i<=n;i++)
    {
        f=f*i;
        
    }
    printf("factorial :%d",f);
return 0;
}
