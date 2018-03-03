#include<stdio.h>
#define PL 3.14
#define AREA(x,y,z) (1,2,3) (PL*x*x+y*z)
int main(int argc, char**argv)
{
	float a = AREA(1, 5, 8);
	float b = AREA(AREA(1, 5, 8), 4, 5);
	printf("a = %f", a);
	printf("b = %f", b);


	return 0;
}