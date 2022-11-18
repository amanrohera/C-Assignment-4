#include<stdio.h>
int cube(int n){
	int result;
	result=n*n*n;
	return result;
	
}
void main(){
	int n,flag;
	printf("Enter the Number for cube");
	scanf("%d",&n);
	flag=cube(n);
	printf("The Cube of number is %d",flag);
}