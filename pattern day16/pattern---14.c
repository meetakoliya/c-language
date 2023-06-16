#include <stdio.h>
int main() 
{
	int i,j,k;
	char ch;
	
    for(i=1;i<=5;i++)
    {
    	for(k=i;k<5;k++)
    	{
    		printf(" ");
		}
		ch = 'A';
        for(j=1;j<=i;j++)
        {
            printf("%c",ch);
            ch++;
        }
        printf("\n");
    }
    return 0;
}
