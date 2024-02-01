#include<stdio.h>
void posinegizero();
int main()
{
	posinegizero();
	return 0;
}
void posinegizero()
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