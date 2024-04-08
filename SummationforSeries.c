#include<stdio.h>
main(){
	int i,n,sum=0;
	printf("Enter no. upto which perform summation: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum=(i*(i+1)*(2*i+4)/12);
	}
	printf("\nSummation upto %d no.s is %d",n,sum);
}
