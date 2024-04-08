#include<stdio.h>
main(){
	int n,i,j,sum=0;
	printf("Enter no. upto which sum of multiplication no.s is required: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
			sum=sum+(i*n);
	}
	printf("Result of sum of multiplication of no.s is: %d",sum);
}
