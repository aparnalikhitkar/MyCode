#include<stdio.h>
int main(int argc, char**argv)
{
	char suite = 3;
	switch(suite)
	{
		case 1:
			printf("Diamond \n");
		case 2:
			printf("Spade \n");
		default:
			printf("Heart \n");
	}
	printf("I thought one wears a suite");
	return 0;
}