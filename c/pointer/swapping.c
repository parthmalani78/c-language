#include<stdio.h>
int main()
{
	int i,j,k;
	
	int* p1=&i;
	int* p2=&j;
	int* p3=&k;
	
	printf("enter the first value:-");
	scanf("%d",&i);
	
	printf("enter the second value:-");
	scanf("%d",&j);
	
	printf("this is address:- %p\n",&i);
	printf("this is address:- %p\n",&j);
	
	*p3=*p1;
	*p1=*p2;
	*p2=*p3;
	
	printf("this is a swapping value:- %d\n",*p1);
	printf("this is b swapping value:- %d\n",*p2);
}