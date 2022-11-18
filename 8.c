#include<stdio.h>
int Q8(){
	int n1,n2,n3,n4,n5;
	float avg;
	printf("Enter the marks");
	scanf("%d %d %d %d %d",&n1,&n2,&n3,&n4,&n5);
	avg=(n1+n2+n3+n4+n5)*100/500;
	return avg;
	
}
void main(){
	float flag;
	flag=Q8();
	printf("The avg of marks are %f",flag);	
}
