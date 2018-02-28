#include<stdio.h>
int main(int argc, char**argv)
{
	int i = 3;
	switch (i)
	{
	case 0:
		printf("Customers are dicey");
	case 1+0:
		printf("Markets are pricey ");
	case 4/2:
		printf("Investors are moody ");
	case 8%5:
		printf("At least employee are good ");
	default:
		break;
	}
	return 0;
}







