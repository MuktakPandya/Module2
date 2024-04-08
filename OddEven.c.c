#include<stdio.h>
main(){
	int i,j,n[10],odd=0,even=0;
	printf("Enter any 10 no.\n");
	
	for(i=1;i<=10;i++){
		scanf("%d",&n[i]);
	}
	
	for(i=1;i<=10;i++){
		if(n[i]%2==0){
			printf("%d no. is even\n",n[i]);
			even+=n[i];
		}
		else{
			printf("%d no. is odd\n",n[i]);
			odd+=n[i];
		}
	}
	printf("Sum of even no. is %d\n",even);
	printf("Sum of odd no. is %d",odd);
	
}
