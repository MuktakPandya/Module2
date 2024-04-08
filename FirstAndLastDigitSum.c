#include<stdio.h>
main(){
	int i,sum=0,FirstDigit,LastDigit;
	printf("Enter any no.: ");
	scanf("%d",&i);
	
	LastDigit=i%10; //LastDigit=Remainder
	
	FirstDigit=i; //Initialization
	while(i>=10){
		i=i/10;
	}
	FirstDigit=i;
	
	sum=FirstDigit+LastDigit;
	printf("Sum of First and Last Digit is: %d",sum);
}
