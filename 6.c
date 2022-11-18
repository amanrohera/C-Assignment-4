#include<stdio.h>
void swap(){
	int a,b,c=0;
	printf("The two numbers");
	scanf("%d %d",&a,&b);
	c=a;
	a=b;
	b=c;
	printf("The Number after swapping is %d %d",a,b);
	
}
void main(){
	swap();
}