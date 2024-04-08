#include<stdio.h>
main(){
	int i,n[5],odd=0,even=0,Counteven,Countodd;
	printf("Enter 5 no.s: \n");
	
	i=0;
	while(i<5){
		scanf("%d",&n[i]);
		i++;
	}
	
	i=0;
	while(i<5){
		if(n[i]%2==0){
			even+=n[i];
			Counteven++;
		}
		if(n[i]%2!=0){
			odd+=n[i];
			Countodd++;
		}
		i++;
	}
	printf("\nCount of Odd no.s is %d and Sum of Odd no.s is %d\n",Countodd,odd);
	printf("\nCount of even no.s  is %d and Sum of even no.s  is %d",Counteven,even);
}
