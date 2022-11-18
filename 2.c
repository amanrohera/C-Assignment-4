#include<stdio.h>
void product(){
	int a,b,result;
	printf("Enter the two numbers");
	scanf("%d %d",&a,&b);
	result=a*b;
	printf("The Product Of Numbers is %d\n",result);
}
void division(){
	int a,b;
	float result;
	printf("Enter the two numbers");
	scanf("%d %d",&a,&b);
	result=a/b;
	printf("The Division Of Numbers is %f\n",result);
	
}
void main(){
	product();
	division();
}