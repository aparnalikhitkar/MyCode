#include<stdio.h>
int main(int argc, char**argv)
{
	static int count = 5;
	printf("count = %d", count--);
	if (count != 0)
		main ();
	return 0;
}