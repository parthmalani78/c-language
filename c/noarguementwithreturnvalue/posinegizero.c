#include<stdio.h>
int posinegizero();

int main()
{
	posinegizero();
	return 0;
}
int posinegizero()
{
	int a;
	
	printf("enter the value:-");
	scanf("%d",&a);
	
	if(a==0)
	{
		printf("this value is a zero");
	}
	else if(a>0)
	{
		printf("this value is a positive");
	}
	else
	{
		printf("this value is a negative");
	}
}