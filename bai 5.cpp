#include<stdio.h>
int main (){
	int n;
	printf("nhap n=");
	scanf("%d",&n);
	if(n<=1)
	{printf("khong phai so nguyen to"); }
	                      else{	
						  printf("cac so nguyen to truoc %d la:\n",n); 
	                for(int i=2;i<n;i++)
					{int s=0; 
					{for(int j=2;j<=i;j++)      
	                               {if(i%j==0)
								   {s=s+1;}}
								    
								   if(s==1)
			printf("%d\n",i);}
		}
			}
			return 0; 
                } 
 
