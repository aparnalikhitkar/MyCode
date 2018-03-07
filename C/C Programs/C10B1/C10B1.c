#include<stdio.h>
int main(int argc, char**argv)
{
	struct emloyee
	{
		char name[25];
		int age;
		float bs;

	};

	struct employee e;
	strcpy(e.name, "Hacker");
	age = 25;
	printf("%s%d", e.name, age);
	return 0;
}