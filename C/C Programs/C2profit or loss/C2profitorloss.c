#include<stdio.h>
int main(int argc, char**argv)
{
	float cp = 0, sp = 0, p = 0, l = 0;
	p = sp - cp;
	l = cp - sp;
	if (p > 0)
		printf("The seller has made a profit of Rs.%f", p);
	if (l > 0)
		printf(" The seller is in loss by Rs.%f", l);
	if (p == 0)
		printf("Ther is no loss ,no profit");

	return 0;
}