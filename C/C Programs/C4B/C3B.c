#include<stdio.h>
int main(int main, char**argv)
{
	int c = 3;
	switch (c)
	{
	case'3':
		printf("You never win the silver prize ");
		break;
	case 3:
		printf("You always lose the gold prize ");
		break;
	default:
		break;
	}
	return 0;
}