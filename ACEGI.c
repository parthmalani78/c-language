#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the charecter:-");
	scanf("%d",&n);
	
	for(i=65;i<=n;i++)
	{
		if(i%2==!0)
		{
			printf("%c\t",i);
		}
	}
}