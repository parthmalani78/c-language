#include<stdio.h>
int main()
{
	char i,j;
	for(i='A',j='a';i<='Z',j<='z';i++,j++)
	{
		printf("%c - %c\n",i,j);
	}
}