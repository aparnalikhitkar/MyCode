#include<stdio.h>
int main(int argc, char**argv)
{
	int n=0;
	printf("Enter any number");
	scanf("%d", &n);
	if (n % 2 == 0)
	{
		printf("The number is even ");

	}
	else
	{
		printf("The number is odd");
	}
	return 0;
}