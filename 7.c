#include<stdio.h>
void prime(){
	int n,i,flag;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=2;i<n;i++){
		if(n%i==0){
			flag=1;
		}
	}
	if(flag!=0){
		printf("The number is not prime");
	}
	else{
		printf("The number is prime");
	}
}
void main(){
	prime();
}