#include<stdio.h>
int main()
{
	int ios,html,web,total;
	float per;
	
	printf("enter the ios marks:-");
	scanf("%d",&ios);
	
	printf("enter the html marks:-");
	scanf("%d",&html);
	
	printf("enter the web marks:-");
	scanf("%d",&web);
	
	total=ios+html+web;
	
	printf("this is total value:- %d\n",total);
	
	
	
	if(ios>45 && html>45 && web>45)
	{
		
		printf("student is pass");
		per=total*100/300;
	
	    printf("this is per:- %f\n",per);
	}
	else
	{
		printf("student is fail");
	}
}