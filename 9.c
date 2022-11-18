#include<stdio.h>
void max(){
	int a,b;
	printf("Enter the numbers");
	scanf("%d %d",&a,&b);
	if(a>b){
		printf("A is maximun");
	}
	else{
		printf("B is maximum");
	}
}
void main(){
	max();
}