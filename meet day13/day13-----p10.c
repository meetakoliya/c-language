#include <stdio.h>

int main() {
    int n;
    int i=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    
    printf("Multiplication Table of %d:\n", n);
    
    do{
        printf("%d x %d = %d\n", n, i, n * i);
        i++;
    }while(i <= 10);
    
    return 0;
}

