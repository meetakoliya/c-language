#include <stdio.h>

int main()
{
    char value;

    printf("Enter any value: ");
    scanf("%c", &value);


    if(value >= 'a' && value <= 'z')
    {
        printf("%c is alphabet.",value);
    }
    else if(value >= '0' && value <= '9')
    {
        printf("%c is digit.", value);
    }
    else 
    {
        printf("'%c' is special character.",value);
    }

    return 0;
}
