#include<stdio.h>
int main(){
	int a,b;
	do{
	printf("nhap vao 2 so a,b:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a<=0||b<=0)
	{printf("2 so nhap vao phai khac 0! hay nhap lai\n");
	}}
	while(a<=0||b<=0);
	int u=0;
	for(int i=1;i<=a;i++)
	{if(a%i==0&&b%i==0)
	u=i;}
	printf("UCLN cua 2 so tren la : %d",u);
	return 0;
	} 
