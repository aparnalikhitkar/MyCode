#include<stdio.h>
int main(int argc, char**argv)
{
	float x = 1.1;
	while (x==1.1)
	{
		printf("%f", x); 
		x = x - 0.1;

	}
	return 0;
}