#include<stdio.h>
// int reverse()
// {
	// int i,n;
	// printf("enter the number:-");
	// scanf("%d",&n);
	
	// while(n>0)
	// {
		// i=n%10;
		// printf("%d\t",i);
		// n=n/10;
	// }
// }
// int main()
// {
	// reverse();
	// return 0;
// }

int perfect()
{
	int num,rem,sum=0;
	printf("enter the number:-");
	scanf("%d",&num);
	
	for(int i=1;i<num;i++)
	{
		rem=num%i;
		if(rem==0)
		{
			sum=sum+i;
		}
	}
	if(sum==num)
	{
		printf("this is a perfect number");
	}
	else
	{
		printf("this is not a perfect number");
	}
}
int main()
{
	perfect();
	return 0;
}