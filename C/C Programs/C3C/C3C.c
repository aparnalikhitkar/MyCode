#include<stdio.h>
int main(int argc, char**argv)
{
	int x = 4, y=0, z=0;

	y = --x;
	z = x-- ;
	printf("%d%d%d", x, y, z);

	return 0;
}