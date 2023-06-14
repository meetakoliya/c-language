#include <stdio.h>
int main() 
{
	int r,c;
	
    for(r=1;r<=5;r++)
    {
        for(c=1;c<=r;c++)
        {
            if((r+c) % 2 == 0)
            {
            	printf("-");
			}
			else
			{
				printf("|");
			}
        }
        printf("\n");
    }
    return 0;
}
