#include<stdio.h>
int main(int argc, char**argv)
{
	int ch = 'a' + 'b';
	switch (ch)
	{
	case'a':
		case 'b':
		case'A':
			printf("You entered b\n");
		case'b' + 'a':
			printf("You entered a and a and b ");
	default:
		break;
	}
	return 0;
}