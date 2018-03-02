#include<stdio.h>
int main(int argc, char**argv)
{
	float a = 25.345;
	float *b;
	b = &a;
	printf("%f %u", a, b);
	return 0;
}