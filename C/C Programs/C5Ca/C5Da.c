#include<stdio.h>
long fact(int);
int main(int argc, char**argv)
{
	
	int num = 0;
	long factorial;
	printf("Entet a number ");
	scanf_s("%d", &num);
	factorial = fact(num);
	printf("Factorial of %d =%d", num, factorial);
	return 0;
}
long fact(int num)
{
	int i;
	long factorial = 1;
	for (i = 1; i <= num; i++)
		factorial = factorial * i;
	return (factorial);
}