// #include<stdio.h>
// int factorial(int number)
// {
	// if(number==1 || number==0)
	// {
		// return 1;
	// }
	// else
	// {
		// return number*factorial(number-1);
	// }
// }
// int main()
// {
	// int num=5;
	// int total=factorial(num);
	// printf("Is number %d factorial is %d\n",num,total);
	// return 0;
// }
#include<stdio.h>
int sum(int arr[])
{
	int total=0;
	for(int i=0;arr[i]!='\0';i++)
	{
		total=total+arr[i];
	}
	return total;
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,'\0'};
	int total=sum(arr);
	printf("the sum of array is:- %d\n",total);
	return 0;
	
}