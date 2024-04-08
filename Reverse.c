#include<stdio.h>
main(){
	int n[5],i;
	printf("Enter no. to reverse: \n");
	
	for(i=0;i<4;i++){
		scanf("%d",&n[i]);
	}
	printf("\nReverse of given no. is: \n");
	for(i=3;i>=0;i--){
		printf("%d\n",n[i]);
	}
	
}
