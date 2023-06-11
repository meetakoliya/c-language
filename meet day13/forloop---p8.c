#include <stdio.h>
int main()
{
    int i;
	int n,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
     
    for(i=0;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("sum :%d",sum);
return 0;
}
