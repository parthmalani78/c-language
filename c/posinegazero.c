#include<stdio.h>
int main()
{
	int a;
	printf("enter the value:-");
	scanf("%d",&a);
	
	if(a==0)
	{
		printf("this value is zero");
	}
	else
	{
		if(a>0)
		{
			printf("this value is positive");
		}
		else
		{
			printf("this value is negative");
		}
		
	}	
}