#include<stdio.h>
void p1(int k)
{
	int i,j;
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
void p2(int k)
{
	int i,j;
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}
void p3(int k)
{
	int i,j;
	for(i=k;i>=1;i--)
	{
		for(j=k;j>=i;j--)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}
void p4(int k)
{
	int i,j,n=1;
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d ",n++);
		}
		printf("\n");
	}
}
void p5(int k)
{
	int i,j;
	for(i=k;i>=1;i--)
	{
		for(j=k;j>=i;j--)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
void p6(int k)
{
	int i,j;
	for(i='A';i<=k;i++)
	{
		for(j='A';j<=i;j++)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}
void p7(int k)
{
	int i,j,n=65;
	for(i=1;i<=k;i++)
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
void p8(int k)
{
	int i,j,n=65;
	for(i=1;i<=k;i++)
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
void p9(int k)
{
	int i,j,n='A';
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%c ",n++);
		}
		printf("\n");
	}
}
void p10(int k)
{
	int i,j;
	for(i=k;i>=1;i--)
	{
		for(j=i;j<=k;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
void p11(int k)
{
	int i,j,l=1;
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(l%2==1)
			{
				printf("1 ");
			}
			else
			{
				printf("0 ");
			}
			l++;
		}
		printf("\n");
	}
}
void p12(int k)
{
	char i,j;
	
	for(i='A';i<=k;i++)
	{
		for(j=i;j>='A';j--)
		{
			printf("%c ",j);
		}
		printf("\n");
	}
}
void p13(int k)
{
	int i,j;
	
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
void p14(int k)
{
	int i,j,l;
	
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=k-i;j++)
		{
			printf(" ");
		}
		for(l=1;l<=i;l++)
		{
			printf("* ");
		}
		printf("\n");
	}
}
void p15(int k)
{	
	int i,j;
	
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=k;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}
void p16(int k)
{	
	int i,j;
	
	for(i=k;i>=1;i--)
	{
		for(j=1;j<=k;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
}
void p17(int k)
{	
	int i,j;
	
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=k;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
void p18(int k)
{	
	char i,j;
	
	for(i='A';i<=k;i++)
	{
		for(j='A';j<=k;j++)
		{
			printf("%c ",i);
		}
		printf("\n");
	}
}
void p19(int k,int m)
{	
	int i,j;
	
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(i%2==0){
			printf("%d\t",i);
			}
		}
		printf("\n");
	}
}
void p20(int k,int m)
{	
	int i,j;
	
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=m;j++)
		{
			if(i%2!=0){
			printf("%d\t",i);
			}
		}
		printf("\n");
	}
}
void p21(int k)
{	
	int i,j,n=1;
	
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=k;j++)
		{
			printf("%d\t",n++);
		}
		printf("\n");
	}
}
void p22(int k)
{	
	int i,j;
	char n='A';
	
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=k;j++)
		{
			printf("%c ",n++);
		}
		printf("\n");
	}
}
void p23(int k)
{	
	int i,j,n=11;
	
	for(i=1;i<=k;i++)
	{
		for(j=1;j<=k;j++)
		{
			printf("%d ",n++);
		}
		n+=5;
		printf("\n");
	}
}
int main()
{
	
	int k=5;
	
	p23(k);
	return 0;
}