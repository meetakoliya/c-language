#include <stdio.h>
int main()
{
    int i=0;
	int n,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
     
    while(i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("sum :%d",sum);
return 0;
}
