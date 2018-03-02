#include<stdio.h>
int g(int);
int main(int argc, char**argv)
{
	int i = 0, j = 0;
	for (i = 1; i < 5; i++)
	{
		j = g(i);
		printf("%d", j);
	}
	return 0;
}
int g(int x)
{
	static int v = 1;
	int b = 3; 
	v += x;
	return (v + x + b);
}