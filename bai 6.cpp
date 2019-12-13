#include<stdio.h>
int main(){
	int a,b;
	int s=0;
	do{
	printf("nhap 2 so a va b:\n");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a>=b)
	printf("a phai nho hon b, vui long nhap lai \n");}
	while(a>=b) ;
	for (int i=a;i<=b;i++)
	s=s+i;
	printf("tong cac so a<b la : %d",s);
	return 0;
} 
