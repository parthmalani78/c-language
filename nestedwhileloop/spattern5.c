#include<stdio.h>
int main()
{
	int i=1;
	while(i<=10)
	{
		int j=1;
		while(j<=5)
		{
			if(i%2==0)
			{
			printf("%d\t",i);
			                       
			}
			j++;
		}
		printf("\n");
		i++;
	}
	
}