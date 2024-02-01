#include<stdio.h>
void p23();
int main()
{
	p23();
	return 0;
}
void p1()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
void p2()
{
	int i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}
void p3()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}
void p4()
{
	int i,j,n=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",n++);
		}
		printf("\n");
	}
}
void p5()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
void p6()
{
	int i,j;
	for(i='A';i<='E';i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}
void p7()
{
	int i,j,n=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				printf("%c ",n+32);
			}
			else
			{
				printf("%c ",n);
			}
			n++;
		}
		printf("\n");
	}
}
void p8()
{
	int i,j,n=65;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(j%2==0)
			{
				printf("%c ",n);
			}
			else
			{
				printf("%c ",n+32);
			}
			n++;
		}
		printf("\n");
	}
}
void p9()
{
	int i,j,n='A';
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",n++);
		}
		printf("\n");
	}
}
void p10()
{
	int i,j;
	for(i=5;i>=1;i--)
	{
		for(j=i;j<=5;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
void p11()
{
	int i,j,k=1;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(k%2==1)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
			k++;
		}
		printf("\n");
	}
}
void p12()
{
	char i,j;
	
	for(i='A';i<='E';i++)
	{
		for(j=i;j>='A';j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}

void p13()
{
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

void p14()
{
	int i,j,k;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5-i;j++)
		{
			printf(" ");
		}
		for(k=1;k<=i;k++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
void p15()
{	
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}

void p16()
{	
	int i,j;
	
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}

void p17()
{	
	int i,j;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}

void p18()
{	
	char i,j;
	
	for(i='A';i<='E';i++)
	{
		for(j='A';j<='E';j++)
		{
			printf("%c ",i);
		}
		printf("\n");
	}
}

void p19()
{	
	int i,j;
	
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i%2==0){
			printf("%d\t",i);
			}
		}
		printf("\n");
	}
}

void p20()
{	
	int i,j;
	
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=5;j++)
		{
			if(i%2!=0){
			printf("%d\t",i);
			}
		}
		printf("\n");
	}
}

void p21()
{	
	int i,j,n=1;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d\t",n++);
		}
		printf("\n");
	}
}

void p22()
{	
	int i,j;
	char n='A';
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%c ",n++);
		}
		printf("\n");
	}
}

void p23()
{	
	int i,j,n=11;
	
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++)
		{
			printf("%d ",n++);
		}
		n+=5;
		printf("\n");
	}
}


