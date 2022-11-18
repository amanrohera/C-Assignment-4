#include<stdio.h>
void sum(){
	int a,b,c,sum=0;
	printf("Enter the three numbers");
	scanf("%d %d %d",&a,&b,&c);
	sum=a+b+c;
	printf("The Sum Of Numbers is %d",sum);
}
void main(){
	sum();
}