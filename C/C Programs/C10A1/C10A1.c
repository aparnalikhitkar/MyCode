#include<stdio.h>
int main(int argc, char**argv)
{
	struct gospel
	{
		int num;
		char mess1[50];
		char mess2[50];


	}m;
	m.num = 1;
	strcpy(m.mess1, "If all they have is hammer ");
	strcpy(m.mess2, "Everything looks like a nail ");

	printf("%u %u %u", &m.num, &m.mess1, m.mess2);
	return 0;
}