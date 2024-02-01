#include<stdio.h>
void sum(int a,int b)
{
	int total=a+b;
	printf("this is a total:- %d\n",total);
}
int main()
{
	int a=10;
	int b=20;
	
	sum(a,b);
	sum(50,100);
	return 0;
	
}