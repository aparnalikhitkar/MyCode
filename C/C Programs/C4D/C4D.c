#include<stdio.h>
int main(int argc, char**argv)
{
	int k;
	float j = 2.0;
	switch (k=j+1)
	{
	case 3:
		printf("Trapped ");
		break ;

	default:
		printf("Caught! ");
		break;
	}
	return 0;
}