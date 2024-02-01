#include<stdio.h>
int main()
{
	int a;
	printf("enter the value:-\n");
	scanf("%d",&a);
	
	switch(a)
	{
		case 10:
		printf("this is value 10\n");
		break;
	    case 12:
		printf("this is value 12\n");
		break;
		case 15:
		printf("this is value 15\n");
		break;
		
		default:
		printf("this value is not 10,12 or 15");
		
	}
	
}