#include<stdio.h>
#include<string.h>
struct student
{
	int id,eco,eng,guj,total;
	char name[15];
};
struct student d;


int main()
{
	struct student s[3];
	for(int i=0;i<3;i++)
	{
		printf("\nenter the id:-");
		scanf("%d",&s[i].id);
		printf("\nenter the name:-");
		scanf("%s",&s[i].name);
		printf("\nenter the eco marks:-");
		scanf("%d",&s[i].eco);
		printf("\nenter the eng marks:-");
		scanf("%d",&s[i].eng);
		printf("\nenter the guj marks:-");
		scanf("%d",&s[i].guj);
	}
	for(int i=0;i<3;i++)
	{
		printf("\nid:- %d",s[i].id);
		
		printf("\nthe name:- %s",s[i].name);
		
		printf("\neco marks:- %d",s[i].eco);
		
		printf("\neng marks:- %d",s[i].eng);
		
		printf("\nguj marks:- %d",s[i].guj);
		
		d.total=s[i].eco+s[i].eng+s[i].guj;
		printf("\nthis total:- %d\n\n",d.total);
		
	}
}