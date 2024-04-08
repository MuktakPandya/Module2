#include<stdio.h>
main(){
	int i,n,sum=0;
	printf("Enter no. upto which you want sum: ");
	scanf("%d",&n);
	
	i=1;
	while(i<=n){
		sum+=i;
		i++;
	}
	printf("Sum is %d",sum);
}
