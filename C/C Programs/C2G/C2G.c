#include<stdio.h>
int main(int argc, char**argv)
{
	int k = 35;
	printf("%d%d%d", k == 35, k = 50, k > 40);
	return 0;
}