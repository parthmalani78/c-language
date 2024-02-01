#include<stdio.h>
int main()
{
	int basic;
	float HRA,DA,grosssalary;
	
	printf("enter the basic salary of employee:-");
	scanf("%d",&basic);
	
	if(basic<=5000)
	{
		HRA=(basic*8)/100;
		DA=(basic*20)/100;
	}
	else if(basic<=10000)
	{
		
		HRA=(basic*12)/100;
		DA=(basic*30)/100;
	}
	else if(basic<=15000)
	{
		HRA=(basic*15)/100;
		DA=(basic*40)/100;
	}
	else if(basic>=15000)
	{
		
		HRA=(basic*20)/100;
		DA=(basic*50)/100;
	}
	
	grosssalary=basic+HRA+DA;
	
	printf("this is a gross salary:- %f",grosssalary);
	
	
}	