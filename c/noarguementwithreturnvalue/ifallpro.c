#include<stdio.h>
int largeno();

int main()
{
	largeno();
	return 0;
}
int smallestvalue()
{
	int a,b;
	printf("enter the value:-");
	scanf("%d",&a);
	printf("enter the value:-");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("b is smallest value\n");
	}
}
int posneg()
{
	int a;
	printf("enter the value:-");
	scanf("%d",&a);
	
	if(a>=0)
	{
		printf("a is positive\n");
	}
	else
	{
		printf("a is negative\n");
	}
	
}
int divfive()
{
	int a;
	printf("enter the value:-");
	scanf("%d",&a);
	
	if(a%5==0)
	{
		printf("A is divided by 5\n");
	}
	else
	{
		printf("A is not divided by 5\n");
	}
}
int divfivethree()
{
	int a;
	printf("enter the value:-");
	scanf("%d",&a);
	
	if(a%5==0 && a%3==0)
	{
		printf("A is divided by 5 and 3\n");
	}
	else
	{
		printf("A is not divided by 5 and 3\n");
	}
}
int studmarksheet()
{
	int guj,eng,eco,total;
	float per;
	
	printf("enter the guj marks:-");
	scanf("%d",&guj);
	printf("enter the eng marks:-");
	scanf("%d",&eng);
	printf("enter the eco marks:-");
	scanf("%d",&eco);
	
	total= guj+eng+eco;
	printf("total of student marks:- %d\n",total);
	
	if(guj>=36 && eng>=36 && eco>=36)
	{
		printf("student is pass\n");
		per=total*100/300;
		printf("percentage of the student:- %f\n",per);
	}
	else
	{
		printf("student is fail\n");
	}
}
int leapyear()
{
	int year;
	
	printf("enter the year:-");
	scanf("%d",&year);
	
	if(year%4==0)
	{
		printf("this is a leap year\n");
	}
	else
	{
		printf("this is not a leap year\n");
	}
}
int largeno()
{
	int a,b,c;
	
	printf("enter the value:-");
	scanf("%d",&a);
	printf("enter the value:-");
	scanf("%d",&b);
	printf("enter the value:-");
	scanf("%d",&c);
	
	if(a>b)
	{
		if(a>c)
		{
			printf("a is largest:- %d\n",a);
		}
		else
		{
			if(c>b)
			{
				printf("c is largest:- %d\n",c);
			}
		}
	}
	else
	{
		if(b>c)
		{
			printf("b is largest:- %d\n",b);
		}
         else	
		{
			printf("c is largest:- %d\n",c);
		}				
	}
	
} 