#include<stdio.h>

int main()
{
	int a,b,c;
	
	printf("enter the first value:-");
	scanf("%d",&a);
	
	printf("enter the second value:-");
	scanf("%d",&b);
	
	printf("enter the third value:-");
	scanf("%d",&c);
	
	if(a>b&&a>c)
	{
		printf("a is larger");
	}
	else if(b>c&&b>a)
	{
		printf(" b is larger");
	}
	else
	{
		printf("c is larger");
	}
}