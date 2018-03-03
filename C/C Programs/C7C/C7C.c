#include<stdio.h>
#define PRODUCT (x) (x*x)
int  main(int argc, char**argv)
{
	int i = 3, j = 0, k = 0;
	j = PRODUCT(i++);
	k = PRODUCT(++i);
	printf("%d%d", j, k);
	return 0;
}