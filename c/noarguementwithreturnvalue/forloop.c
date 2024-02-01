#include<stdio.h>
int  p7();

int main()
{
	p7();
	return 0;
}
int print10to1()
{
	int i;
	for(i=10;i>0;i--)
	{
		printf("%d\n",i);
	}
}
int print51to99()
{
	int i;
	for(i=51;i<=99;i++)
	{
		printf("%d\n",i);
	}
}
int print1ton()
{
	int i,n;

	printf("enter the value:-");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("%d\n",i);
	}

}
int printnto1()
{
	int i,n;

	printf("enter the value:-");
	scanf("%d",&n);

	for(i=n;i>=1;i--)
	{
		printf("%d\n",i);
	}
}
int printminusnton()
{
	int i,n;

	printf("enter the value:-");
	scanf("%d",&n);

	for(i=-n;i<=n;i++)
	{
		printf("%d\n",i);
	}
}
int printoddupto50()
{
	int i,n;

	printf("enter the value:-");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	if(i%2!=0)
	{
		printf("%d\n",i);
	}
}
int printevenupto50()
{
	int i,n;

	printf("enter the value:-");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	if(i%2==0)
	{
		printf("%d\n",i);
	}
}
int AtoZ()
{
	int i;
	for(i='A';i<='Z';i++)
	{
		printf("%c\n",i);
	}
}
int A65toZ90()
{
	int i;
	for(i='A';i<='Z';i++)
	{
		printf("%c-%d\n",i,i);
	}
}
int AatoZz()
{
	int i,j;
	for(i='A',j='a';i<='Z',j<='z';i++,j++)
	{
		printf("%c-%c\n",i,j);
	}
}
int total1to10()
{
	int i,total=0;
	for(i=0;i<=10;i++)
	{
		total+=i;
	}
	printf("%d\n",total);
}
int printoddtotal()
{
	int i,n,total=0;

	printf("enter the value:-");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	if(i%2!=0)
	{
		total+=i;
	}
		printf("%d\n",total);
}
int printeventotal()
{
	int i,n,total=0;

	printf("enter the value:-");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	if(i%2==0)
	{
		total+=i;
	}
		printf("%d\n",total);
}
int p1()
{
	int i,n;
	printf("enter the value:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("%d\n",i*i);
	}

}
int p2()
{
	int i,n;
	printf("enter the value:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
		printf("%d\n",i*i);
		}
		else
		{
			printf("%d\n",i);
		}
	}

}
int p3()
{
	int i,n;
	printf("enter the value:-");
	scanf("%d",&n);
	for(i=1;i<=n;i*=2)
	{
		printf("%d\n",i);
	}

}
int p4()
{
	int i,j,n,sum;
	printf("enter the value:-");
	scanf("%d",&n);
	for(i=1,j=1;i<=n;i++,j*=2)
	{
		sum=j*i;
		printf("%d\n",sum);
	}

}
int p5()
{
	int i,n;
	printf("enter the value:-");
	scanf("%d",&n);
	for(i=65;i<=n;i++)
	{
		if(i%2==!0)
		{
		printf("%c\n",i);
		}
	}
}
int p6()
{
	int i,n,a1=0,a2=1,sum=a1+a2;
	printf("enter the value:-");
	scanf("%d",&n);
	for(i=1;i<=n;i*=2)
	{
		printf("%d\n",sum);
		a1=a2;
		a2=sum;
		sum=a1+a2;
	}

}
int p7()
{
	int i,n;
	printf("enter the value:-");
	scanf("%d",&n);
	for(i=65;i<=n;i++)
	{
		if(i%4==!0)
		{
		printf("%c\n",i);
		}
		else if(i%2==!0)
		{
			printf("%c\n",i+32);
		}
	}

}