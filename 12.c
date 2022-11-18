#include<stdio.h>
void sum(){
	int b=50,i,sum=0;
	for(i=0;i<=b;i++){
		sum=sum+i;
	}
	printf("Sum %d",sum);
}
void main(){
	sum();
}