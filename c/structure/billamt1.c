#include<stdio.h>
#include<string.h>
struct amount
{
	int amt,netbill,gst;
	
};
struct amount d;

int main()
{
struct amount s[1];
	for(int i=0;i<1;i++)
	{
		printf("enter bill amt:-");
		scanf("%d",s[i].amt);
	}
	printf("\n");
	for(int i=0;i<1;i++)
	{
		printf("bill amt:- %d\n",s[i].amt);
		
		d.gst=s[i].amt*18/100;
		printf("GST amount:- %d\n",d.gst);
		
		s[i].netbill=s[i].amt+d.gst;
		printf("Net bill Amount:- %d\n\n\n",s[i].netbill);
	}
}
