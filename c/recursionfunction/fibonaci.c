#include<stdio.h>
int fibonaci(int a)
{
	if( a==1 || a==0)
	{
		return 1;
	}
	else
	{
		return fibonaci(a-1)+fibonaci(a-2);
	}
}
int main()
{
	int a=10;
	for(int i=0;i<=a;i++)
	{
		printf("this fibonaci is:- %d\n",fibonaci(i));
	}
}