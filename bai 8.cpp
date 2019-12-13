#include<stdio.h>
int main(){
	int n;
	int s=0;
	do{printf("nhap so n:\n");
	scanf("%d",&n);
	if(n<=0)
	printf("n phai lon hon 0,vui long nhap lai! \n");}
	while(n<=0) ;
	for (int i=1;i<=n;i++)
	s=s+i;
	printf("tong cac chu so trc n la : %d",s);
	return 0;
} 
