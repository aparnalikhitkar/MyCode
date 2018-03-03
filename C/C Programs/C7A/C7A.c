#include<stdio.h>
int main(int arrc, char**argv)
{
	int i = 2;
#ifdef DEF
	i *= 1;
#else
	printf("%d", i);


#endif // DEF

	return 0;
}