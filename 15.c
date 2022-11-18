#include<stdio.h>
void prime(){
	int a,b,i,flag,j;
	printf("enter the number");
	scanf("%d %d",&a,&b);
	for(i=a+1;i<=b;i++){
		flag=0;
		for(j=2;j<i;j++){
			if(i%j==0){
				flag=1;
				break;
			}
		}
		if(flag==0){
			printf("%d\n",i);
		}
	}
}
void main(){
	prime();
}