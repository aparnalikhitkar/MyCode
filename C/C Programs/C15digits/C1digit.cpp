#include<stdio.h>
int main(int argc, char**argv)
{
	int num = 0;
	int sum = 0;
	int a = 0;
	int n = 0;
	printf("Enter a 5 digit number ");
	scanf("%d", &num);
	a = num % 10;
	n = num / 10;
	sum = sum + a;

	a = n % 10;
	n = n / 10;
	sum = sum + a;

	a = n % 10;
	n = a / 10;
	sum = sum + a;

	a = n % 10;
	n = a / 10;
	sum = sum + a;

	a = n % 10;
	n = a / 10;
	sum = sum + a;

	printf("The sum of the 5 digits of %d is %d", num, sum);
	return 0;
}