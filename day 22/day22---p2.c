#include<stdio.h>
#include<string.h>

int main(){
	
	char passward[100];
		
	printf("enter passward: ");
	scanf("%s",passward);
	
	int length = strlen(passward);
	int letter = 0 ;
	int digit = 0 ;
	int s_c = 0 ;
	int i;
	
	if(length<6){
		printf("password is invalid !!!! \n");
	}
	
	for(i = 0 ; i < length ; i++ ){
		if( passward[i] >= 'A' && passward[i] <= 'Z' || passward[i] >= 'a' && passward[i] <= 'z' ){
			letter = 1 ;
		}
	    else if( passward[i] >= '0' && passward[i] <= '9' ){
			digit = 1 ;
		}
		else {
			s_c = 1 ;
		}
	}
	
	if( letter && digit && s_c ){
		printf("\npassward is valid.");
	}
	else {
		printf("\npassword is invalid! \n");
	}
	
	return 0;
}
