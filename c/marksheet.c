#include<stdio.h>
int main()
{
	int java,python,html,total;
	float per;
	
	printf("enter the java's marks:-");
	scanf("%d",&java);
	
	printf("enter the python's marks:-");
	scanf("%d",&python);
	
	printf("enter the html's marks:-");
	scanf("%d",&html);
	
	total=java+python+html;
	
	printf("this is total marks:- %d\n",total);
	
	per=total*100/300;
	
	printf("this is percentage:- %f\n",per);
	
	if(per>75)
	{
		printf("\ngrade A");
	}
	else if(per>=60)
	{
		printf("\ngrade B");
	}
	else if(per>=45)
	{
		printf("\ngrade C");
	}
	else if(per>=35)
	{
		printf("\ngrade D");
	}
	else if(per<35)
	{
		printf("\nFAIL");
	}
}