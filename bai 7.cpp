#include<stdio.h>
int main(){
	int n;
	int dem=0;
	do{printf("nhap so n:\n");
	scanf("%d",&n);
	if(n<=0)
	printf("n phai lon hon 0,vui long nhap lai! \n");}
	while(n<=0) ;
	for (int i=1;i<=n;i++)
	dem=dem+1;
	printf("so cac chu so la : %d",dem);
	return 0;
} 
