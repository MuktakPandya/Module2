#include<stdio.h>
main(){
	int i,n,fact=1;
	printf("Enter no. to print factorial: ");
	scanf("%d",&n);
	
	i=1;
	while(i<=n){
		fact=fact*i;
		i++;
	}
	printf("factorial of %d is: ",fact);
}
