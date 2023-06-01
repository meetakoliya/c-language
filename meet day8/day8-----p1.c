#include<stdio.h>
int main()
{
   int a,b,small;

   printf("Enter first Numbers:");
   scanf("%d",&a);
   printf("Enter second Numbers:");
   scanf("%d",&b);

    if(a<b)
    {
          small = a;
    }
    else
    {
          small = b;
    }
    
    printf("%d is smallest number",small);
    return 0;
}
