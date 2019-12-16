#include<stdio.h>
int main(){
	int n;
	printf("n= \n");
	scanf("%d",&n) ;
	int x1=1,x2=1,x3=2;
	int u=0; 
	for (;x2+x3<=n;) {
		x1=x2;
		x2=x3;
		x3=x2+x1;}
	printf("so fibonaci gan nhat %d la: %d",n,x3) ;
	 return 0; 
} 
