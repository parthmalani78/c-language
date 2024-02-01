#include<stdio.h>
int sum(int a,int b)
{
	int total=a+b;
	return total;
}
int main()
{
	int a=10;
	int b=20;
	
	int total=sum(a,b);
	printf("total %d\n",total);
	int total1=sum(50,100);
	printf("total1 is :- %d\n",total1);
	return 0;
	
}