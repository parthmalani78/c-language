#include<stdio.h>
int main()
{
	int i,n,a1=0,a2=1,sum=a1+a2;
	printf("enter the charecter:-");
	scanf("%d",&n);
	
	for(i=0;i<=n;i++)
	{
		
		printf("%d\n",sum);
		a1=a2;
		a2=sum;
		sum=a1+a2;
	}
}