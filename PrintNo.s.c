#include<stdio.h>
main(){
	int i,n[5],a;
	printf("Enter any 5 No.s for printing\n");
	
	for(i=1;i<=5;i++){
		scanf("%d",&n[i]);
	}
	
	for(i=1;i<=5;i++){
		printf("%d\n",n[i]);
	}
}
