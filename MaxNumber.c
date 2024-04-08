#include<stdio.h>
main(){
	int a[5],n,i,j,temp;
	printf("Enter any no.: \n");
	
	for(i=0;i<5;i++){
		scanf("%d",&a[n]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++)
			if(a[j]<a[i]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
		printf("Max no. is: %d",a[n]);
	
}
