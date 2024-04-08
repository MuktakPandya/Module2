#include<stdio.h>
main(){
	int num,sum=0,rem=0;
	printf("Enter any no.: ");
	scanf("%d",&num);
	
	while(num!=0){
		rem=num%10;
		sum=sum+rem;
		num=num/10;
	}
	printf("Sum of digits of given no. without using array is: %d",sum);
}
