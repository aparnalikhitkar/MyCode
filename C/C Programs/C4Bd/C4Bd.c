#include<stdio.h>
int main(int argc, char**argv)
{
	int a = 3, b = 4, c = 0;
	c = b - a;
	switch (c)
	{
	case 1||2:
		printf("god give me an opportunity to change things");
		break;
	case a||b:
		printf("God give me an opportunity to run my show ");
		break;
	default:
		break;
	}
	return 0;
}
/* A case need a constant expression . Logical operators cannot be used in cases.*/