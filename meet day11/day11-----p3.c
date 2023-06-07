#include<stdio.h> 
 main() 
 { 
    int a,b,c,d; 
    printf("Enter the value of A :"); 
    scanf("%d",&a);
    
    printf("Enter the value of B :"); 
    scanf("%d",&b);
    
    printf("Enter the value of C :"); 
    scanf("%d",&c);
    
    printf("Enter the value of D :"); 
    scanf("%d",&d);
	 
    if(a>b) 
	{ 
        if(a>c) 
		{ 
            if(a>d)
			{   
                printf("A is max",a); 
            } 
            else   
			{ 
                printf("D is max",d); 
            } 
        } 
    } 
    else if(b>c)
	{ 
        if(b>d)
		{ 
            printf("B is max",b); 
        } 
        else   
		{ 
            printf("D is max",d); 
        } 
    } 
    else if(c>d)
	{ 
        printf("C is max",c); 
    } 
    else
	{ 
        printf("D is max",d); 
    } 
    return 0;                      
} 
 
