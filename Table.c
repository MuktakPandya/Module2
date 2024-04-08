#include<stdio.h>
main(){
	int i,n,sum=1;
	printf("Enter any no. to print table: ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++){
		sum=i*n;
		printf("%d x %d = %d\n",i,n,sum);
	}
}
