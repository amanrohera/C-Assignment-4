#include<stdio.h>
void max(){
	int a,b,c;
	printf("Enter the numbers");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c){
		printf("A is maximun");
	}
	else if(b>a && b>c){
	
		printf("B is maximum");
	}
	else if(c>a && c>b){
		printf("C is maximum");
	}
}
void main(){
	max();
}