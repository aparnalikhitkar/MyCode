#include<stdio.h>
int main(int arg, char argv)
{
	char s[] = "Get orgainsed! learn C!!";
	printf("\n%s", &s[2]);
	printf("\n%s", s);
	printf("\n%s", &s);
	printf("\n%c", s[2]);
	return 0;
}