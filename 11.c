#include<stdio.h>
int factorial(){
	int n,i,fact=1;
	printf("Enter the number");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n<0){
			printf("fact not possible");
		}
		else{
			fact=fact*i;
		}
	}
	printf("%d",fact);
	
	
}
void main(){
	factorial();
}