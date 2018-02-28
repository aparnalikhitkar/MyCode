#include<stdio.h>
int main(int argc, char**argv)
{
	int temp;
	scanf("%d", &temp);
	switch (temp)
	{
	case (temp <= 20):
		printf("OOooooohhhhh! Damn cool!");
	case (temp >20 && temp <=30):
		printf("Rain rain here again!");
	case (temp >20 && temp <= 30):
		printf("Wish I am on Everest ");
	default:
		printf("good old nagpur weather ");
		break;
	}
	return 0;
}
/*Relational operators cannot be used in cases*/