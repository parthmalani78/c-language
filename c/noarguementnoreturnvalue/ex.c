#include<stdio.h>
void sum();

int main()
{
	printf("Hello World\n");
	sum();
	return 0;
}
void sum()
{
	int a=10;
	int b=20;
	int c=a+b;
	printf("this sum is:- %d",c);
}