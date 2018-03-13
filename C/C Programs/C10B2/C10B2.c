#include<stdio.h>
int main(int argc, char**argv)
{
	struct 
	{
		char name[25];
		char language[0];

	};
	struct emplyee e = { "Hacker ","C" };
	printf("\n%s%d", e.name, e.language);
	return 0;
}