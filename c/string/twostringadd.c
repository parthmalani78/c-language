#include <stdio.h>

int main()
{
	char a[50], b[50], c[50];
	int j,i,r=0;

	printf("Enter First string value: ");
	scanf("%s",&a);

	printf("\nEnter Second string value: ");
	scanf("%s",&b);


	for(j = 0; a[j]!='\0'  ; j++)
	{
		c[j] =a[j];
	}	 
	
	for(i = 0; b[i] != '\0'; i++)
	{
		c[j] = b[i];
		j++;
	}

	c[j] = '\0';


	printf("\n String is: %s", c);
	return 0;
}