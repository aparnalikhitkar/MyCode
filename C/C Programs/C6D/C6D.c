#include<stdio.h>
int sumdig(int);
int main(int argc, char**argv)
{
	int a;
	a = sumdig(12345);
	printf("%d", a);
	return 0;

}
int sumdig(int num)
{
	static int sum;
	int a, b;
	a = num % 10;
	b = (num - a) / 10;
	sum = sum + a;
	if (b != 0)
		sumdig(b);
	else
		return (sum);
}