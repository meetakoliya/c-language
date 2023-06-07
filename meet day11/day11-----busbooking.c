#include<stdio.h>
int main()
{
	int a;
	printf("\n       RNW TRAVELLERS\n\n");
	printf("1. seating coach\n");
	printf("2. sleeping coach\n");
	
	printf("\nenter your choice :");
	scanf("%d",&a);
	
	switch(a)
	{
	case 1:
		printf("\n1.surat to rajkot\n");     
		printf("2.lucknow to ahmedabad\n");
		printf("3.surat to mumbai\n");
		printf("4.kashmir to kanyakumari\n");
		
		printf("\nenter your choice :");
		scanf("%d",&a);
		
		switch(a)
		{
			case 1:
				printf("\nYOUR RESERVATION IS SUCCESSFUL\n");
				break;
			case 2:
				printf("\nYOUR RESERVATION IS SUCCESSFUL\n");
				break;
			case 3:
				printf("\nYOUR RESERVATION IS SUCCESSFUL\n");
				break;			
			case 4:
				printf("\nYOUR RESERVATION IS SUCCESSFUL\n");
				break;
			default:
			    printf("invalid number\n");
				break;	
		}
		
	case 2:
	    printf("\n1.kashmir to kanyakumari\n");
	    printf("2.surat to bihar\n"); 
		printf("3.surat to ayodhya\n");
		printf("4.ahmedabad to rameswaram\n");
		
		printf("\nenter your choice :");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				printf("\nYOUR RESERVATION IS SUCCESSFUL");
				break;
			case 2:
				printf("\nYOUR RESERVATION IS SUCCESSFUL");
				break;
			case 3:
				printf("\nYOUR RESERVATION IS SUCCESSFUL");
				break;			
			case 4:
				printf("\nYOUR RESERVATION IS SUCCESSFUL");
				break;
			default:
			    printf("invalid number");
				break;	
		}
	}
		
	return 0;
}
