#include<stdio.h>
int main(int argc, char**argv)
{
	int x = 3, y = 0, z = 0;
	y = x = 10;
	z = x < 10;
	printf("x = %d y =%d z =%d",x,y,z);
	return 0;
}