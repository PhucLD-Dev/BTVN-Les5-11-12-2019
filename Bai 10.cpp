#include<stdio.h>
int main(){
	int n;
	printf("n= \n");
	scanf("%d",&n) ;
	if(n<=1){
	printf("khong kiem duoc \n");
}else if (n<3){
	printf("so fibonaci gan nhat %d la: %d",n,1) ;
}else if (n<4){
	printf("so fibonaci gan nhat %d la: %d",n,2) ;
} else{
	int x1=1,x2=1,x3=2;
	int u=0; 
	for (int i=4;i<=n;++i) {
		x1=x2;
		x2=x3;
		x3=x2+x1;
		if (x3<n)
		u=x3; }
	printf("so fibonaci gan nhat %d la: %d",n,u) ;}
	 return 0; 
} 
