#include <stdio.h>

int main() {
    int N, i = 1, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &N);

   do
	{
        factorial = factorial * i;
        i++;
    }
     while (i <= N);

    printf("The factorial of %d is: %d\n", N, factorial);

    return 0;
}

