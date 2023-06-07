#include<stdio.h>
int main()
{
	char a;
	printf("enter the first alphabet:");
	scanf("%c",&a);
	
	switch(a)
	{   
        case 's':
			printf("SUNDAY");
			break;
	
		case 'm':
			printf("MONDAY");
			break;

		case 't':
			printf("TUESDAY");
			break;

		case 'w':
			printf("WEDNESDAY");
			break;						

		case 'h':
			printf("THURSDAY");
			break;

		case 'f':
			printf("FRIDAY");
			break;

		case 'a':
			printf("SATURDAY");
			break;

	    default:
		    printf("invalid number");
			break;		
    }
	
	return 0;
}
