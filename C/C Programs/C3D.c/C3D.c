#include<stdio.h>
int main(int argc, char**argv)
{
	int x = 4, y = 3, z = 0;
	z = x-- - y;
	printf("%d%d%d", x, y, z);
	return 0;
}