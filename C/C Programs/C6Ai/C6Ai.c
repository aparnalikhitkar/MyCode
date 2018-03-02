#include<stdio.h>
int x = 10;
int main(int argc, char**argv)
{
	int x = 20;
	{
		int x = 30;
		printf("%d", x);
	}
	printf("\n%d", x);
	return 0;
}