#include<stdio.h>
void printit(a, ch);
int main(int argc, char**argv)
{
	float a = 15.5;
	char ch = 'c';
	printf( a, ch);
	return 0;
}
void printit(a, ch)
{
	printf("%f%c", a, ch);
}