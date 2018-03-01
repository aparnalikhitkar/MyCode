#include<stdio.h>
void check(int ch)
{
	if (ch >= 45)
	{
		return(100);

	}
	else
	{
		return(10 * 10);
	}
}
int main(int argc, char**argv)
{
	int i = 45, c;                             
	c = check (i);
	printf("%d", c);

	return 0;
}
