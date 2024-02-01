#include<stdio.h>
int simpleintrest(int a,b,c)
{
	int total=a*b*c/100;
	return total;
}
int main()
{
	int a=50;
	int b=60;
	int c=70;
	int total=simpleintrest(a,b,c);
	printf("this is total:- %d\n",total);
	return 0;
	
}