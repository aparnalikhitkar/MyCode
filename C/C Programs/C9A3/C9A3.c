#include<stdio.h>
int main(int argc, char**argv)
{
	char s[] = "No two viruses work similarly ";
	int i = 0;
	while (s[i] != 0)
	{
		printf("\n%c%c", s[i], *(s + i));
		printf("\n %c%c", i[s], *(i + s));
		i++;
	}
	return 0;
}