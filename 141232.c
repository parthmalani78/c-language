#include<stdio.h>
int main()
{
	int i,n,j,sum=0;
	
	printf("enter the number:-");
	scanf("%d",&n);
	 
	 for(i=1,j=1;i<=n;i++,j*=2)
	 {
        
		sum=i*j;
		printf("%d\n",sum);
	 }
}
