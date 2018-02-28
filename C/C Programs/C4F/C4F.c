#include<stdio.h>
int main(int argc, char**argv)
{
	int i = 1;
	switch (i -2)
	{
	case -1:
		printf("Feeding fish \n");
	case 0:
		printf("Wedding grass \n");
	case 1:
		printf("mending roof \n");

	default:
		printf("Just to survive \n");
		break;
	}
	return 0;
}