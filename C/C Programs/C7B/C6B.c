#include<stdio.h>
#define PRODUCT(x) (x*x)
int main(int argc, char**argv)
{
	int i = 3, j = 0;
	j = PRODUCT(i + 1);
	printf("%d", j);
	return 0;
}