#include<stdio.h>
main(){
	int num,Reverse=0;
	printf("Enter any no.: ");
	scanf("%d",&num);
	
	while(num!=0){
		Reverse=(Reverse*10)+(num%10);
		num=num/10;
	}
	printf("Reverse of given no. is %d",Reverse);
}
