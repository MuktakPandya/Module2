#include<stdio.h>
int main(){
	int num,FirstDigit,LastDigit,sum=0;
	printf("Enter any no.: ");
	scanf("%d",&num);
	
	LastDigit=num%10;
	FirstDigit=num;
	
	while(num>=10){
		num=num/10;
	}
	FirstDigit=num;
	sum=FirstDigit+LastDigit;
	printf("Sum of First Digit and Last Digit is: %d",sum);
}
