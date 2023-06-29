#include<stdio.h>
int main()
{
    int array[]={10,20,30,40,50};
	int *b1,*b2,*b3,*b4,*b5;
	
	b1 = &array[0];
	b2 = &array[1];
	b3 = &array[2];
	b4 = &array[3];
	b5 = &array[4];
	
	printf("%u -> %d\n",b1,(*b1)*(*b1));
	printf("%u -> %d\n",b2,(*b2)*(*b2));
	printf("%u -> %d\n",b3,(*b3)*(*b3));
	printf("%u -> %d\n",b4,(*b4)*(*b4));
	printf("%u -> %d\n",b5,(*b5)*(*b5));
	
	return 0;	
	
}
