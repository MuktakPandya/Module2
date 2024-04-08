#include<stdio.h>
main(){
	int i,n,t1=0,t2=1,t3=t1+t2;
	printf("Enter no.s to print Fibonacci series upto: ");
	scanf("%d",&n);
	
	printf("\nFibonacci series is: %d %d ",t1,t2);
	
	for(i=3;i<=n;i++){
			t1=t2;
			t2=t3;
			t3=t1+t2;
			printf("%d ",t3);
		}
		
}
