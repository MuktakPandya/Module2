#include<stdio.h>
main(){
	int i,n,sum=0;
	printf("Enter no.s to print sum upto: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum=sum+(i*i);
	}
	printf("Sum is %d",sum);
}
