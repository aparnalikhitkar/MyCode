#include<stdio.h>
static int y;
int main(int argc, char**argv)
{
	static int z;
	printf("%d %d", y, z);
	return 0;
}