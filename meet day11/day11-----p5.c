#include<stdio.h>
int main()
{
	int unit;
	float amount, total_amount, surcharge;

	printf("Enter the Units : ");
	scanf("%d",&unit);

	if(unit <= 50)
	{
		amount = unit * 0.50;
	}
	else if(unit <= 150)
	{
		amount = unit * 0.75;
	}
	else if(unit <= 250)
	{
		amount = unit * 1.20;
	}
	else
	{
		amount = unit * 1.50;
	}

	surcharge = amount * 0.20;
	total_amount = amount + surcharge;

	printf("Your Electric city Bill = %f",total_amount);

	return 0;
}
