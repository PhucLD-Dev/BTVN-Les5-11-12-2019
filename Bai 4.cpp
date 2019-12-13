#include<stdio.h>
int main(){
	int n;
	printf("nhap n= ");
	scanf("%d",&n) ;
	if(n<=0){
	printf("khong kiem duoc \n");
	}else if (n<2){
	printf("so thu %d = %d\n",n,1);
	printf("tong cua n=%d so dau tien la : 1\n",n); ;
}else if (n<3){
	printf("so thu %d = %d\n",n,1);
	printf("tong cua n=%d so dau tien la : 1\n",n); ;
}else if (n<4){
	printf("so thu %d = %d\n",n,2) ;
	printf("tong cua n=%d so dau tien la : 4\n",n);
} else{
	int x1=1,x2=1,x3=2,s1=x1+x2+x3; 
	for (int i=4;i<=n;++i) {
    	x1=x2;
		x2=x3;
		x3=x2+x1;
		   s1=s1+x3;} 
		   printf("so thu n=%d trong day so Fibonacci la: %d\n",n,x3) ;
		printf("tong cua n=%d so dau tien la : %d\n",n,s1);
	}
	 return 0; 
} 
