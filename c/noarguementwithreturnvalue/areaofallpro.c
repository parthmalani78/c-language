#include<stdio.h>
int calnetbill();

int main()
{
	calnetbill();
	return 0;
}
int circle()
{
	int a;
	float pi=3.14;
	printf("enter the radius of circle:-");
	scanf("%d",&a);

	float area=pi*a*a;
	
	printf("the area of given circle circle is:- %f\n",area);
}
int square()
{
	int a,area;
	
	printf("enter the value:-");
	scanf("%d",&a);
	
	area=a*a;
	printf("this area of square is :- %d\n",area);
}
int rectangle()
{
	int len,wid,area;
	
	printf("enter length value:-");
	scanf("%d",&len);
	
	printf("enter width value:-");
	scanf("%d",&wid);
	
	area=len*wid;
	printf("this area of rectangle is :- %d\n",area);
}
int triangle()
{
	int height,base,area;
	
	printf("enter height value:-");
	scanf("%d",&height);
	
	printf("enter base value:-");
	scanf("%d",&base);
	
	area=height*base/2;
	printf("this area of triangle is :- %d\n",area);
}
int intrest()
{
	int a,b,c,total;
	
	printf("enter the value:-");
	scanf("%d",&a);
	printf("enter the value:-");
	scanf("%d",&b);
	printf("enter the value:-");
	scanf("%d",&c);
	
	total=a*b*c/100;
	
	printf("this value is:- %d\n",total);
	
}
int thirdvariable()
{
	int a,b,c;
	printf("enter the value:-");
	scanf("%d",&a);
	printf("enter the value:-");
	scanf("%d",&b);
	
	c=a;
	a=b;
	b=c;
	
	printf("this value is:- %d\n",a);
	printf("this value is:- %d\n",b);
}
int withoutthirdvariable()
{
	int a,b;
	printf("enter the value:-");
	scanf("%d",&a);
	printf("enter the value:-");
	scanf("%d",&b);
	
	a=a+b;
	b=a-b;
	a=a-b;
	
	printf("this value is:- %d\n",a);
	printf("this value is:- %d",b);
}
int calnetbill()
{
	int rate,qty;
	scanf("%d\t%d",&rate,&qty);
	
	int amt=rate*qty;
	int dis=amt*5/100;
	int billamt=amt-dis;
	int gst=billamt*18/100;
	int netbill=gst+billamt;
	
	printf("rate\tqty\tamt\tdis\tbillamt\tgst\tnetbill");
	printf("\n%d\t%d\t%d\t%d\t%d\t%d\t%d\t",rate,qty,amt,dis,billamt,gst,netbill);
}