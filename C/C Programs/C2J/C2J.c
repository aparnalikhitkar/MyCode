#include<stdio.h>
int main(int argc, char**argv)
{
	int x = 15;
	printf("%d%d%d", x != 15, x = 20, x < 30);
	return 0;
}