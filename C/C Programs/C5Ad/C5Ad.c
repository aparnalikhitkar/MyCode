#include<stdio.h>
void check(int ch);
int main(int argc, char**argv)
{
	int i = 45, c;
	c = multiply(i * 1000);
	printf("%d", c);
	return 0;
}
void check(int ch)
{
	if (ch >= 40000)
		return(ch / 10);
	else
		return(10);
}