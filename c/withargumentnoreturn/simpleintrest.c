#include<stdio.h>
int g1=60;
int g2=70;
int g3=80;

void simpleintrest(int a,int b,int c)
{
	int total;
	
	printf("enter the first value:-");
	scanf("%d",&a);
	
	printf("enter the second value:-");
	scanf("%d",&b);
	
	printf("enter the third value:-");
	scanf("%d",&c);
	
	total=a*b*c/100;
	
	printf("this is a simpleintrest value:- %d\n",total);
}
void marksheet(int guj,int eng,int eco)
{
	int total;
	float per;
	printf("enter the guj mark:-");
	scanf("%d",&guj);
	
	printf("enter the eng mark:-");
	scanf("%d",&eng);
	
	printf("enter the eco mark:-");
	scanf("%d",&eco);
	
	total=guj+eng+eco;
	
	printf("this is total:- %d\n",total);
	
	per=total*100/300;
	
	printf("this is a percentage:- %f\n",per);
}
void globalmarksheet(int g1,int g2,int g3)
{
	int total;
	float per;
	
	total=g1+g2+g3;
	printf("this is total:- %d\n",total);
	
	per=total*100/300;
	
	printf("this is a percentage:- %f\n",per);
	
}
int main()
{
	globalmarksheet(g1,g2,g3);
	return 0;
}