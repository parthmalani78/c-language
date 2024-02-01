#include<stdio.h>

int main()
{
	int i=1,n;
	
	printf("enter the number:-");
	scanf("%d",&n);
	
	while(i<=n)
	{
		if(i%2==0){
		printf("%d\n",i*i);
		
		}
		else
		{
			printf("%d\n",i);
			
		}
		i++;
	}
}