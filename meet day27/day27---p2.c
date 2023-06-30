#include <stdio.h>
 
int main()
{
   int x, y, *a, *b, temp;
 
   printf("Enter the value of x:");
   scanf("%d",&x);
   
   printf("Enter the value of y:");
   scanf("%d",&y);
   
 
   printf("Before Swapping\nx = %d\ny = %d\n", x, y);
 
   a = &x;
   b = &y;
 
   temp = *b;
   *b = *a;
   *a = temp;
 
   printf("After Swapping\nx = %d\ny = %d\n", x, y);
 
   return 0;
}
