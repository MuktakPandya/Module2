#include<stdio.h>
main(){
	int i,n[5],sum=0;
	printf("Enter no. for summation: ");
	
	for(i=0;i<5;i++){
		scanf("%d",&n[i]);
	}
	
	for(i=0;i<5;i++){
		sum+=n[i];
	}
	printf("Sum is %d",sum);
}
