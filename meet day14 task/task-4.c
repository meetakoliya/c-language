#include <stdio.h>
int main()
{
    int n, sum=0, firstdigit, lastdigit;
    printf("Enter value : ");
    scanf("%d", &n);
    
    
    while(n >= 10)
    {
        n = n / 10;
    }
    firstdigit =n;
    lastdigit = n % 10;
	 
    sum = firstdigit + lastdigit;
    printf("Sum : %d", sum);
    return 0;
}
