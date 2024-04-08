#include<stdio.h>
main(){
	int i,n,sum=10;
	printf("Enter no. you want series upto: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		if(i%2==1){
			sum=i+i/2;
		}
		else{
			sum=i-i/2;
		}
	}
	printf("Sum of series is %d",sum);
}
