#include<stdio.h>
int main(int argc, char**argv)
{
	int x = 4;
	while (x == 1)
	{
		x = x - 1;
		printf("%d", x);
		--x;
	}
	return 0;
}