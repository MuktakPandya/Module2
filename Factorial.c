#include<stdio.h>
main(){
	int i,n,fact=1;
	printf("Enter no. to print factorial: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		fact*=i;
	}
	printf("Factorial of %d is %d",n,fact);
}
