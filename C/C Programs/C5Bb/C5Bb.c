#include<stdio.h>
int message();
int main(int argc, char**argv)
{
	int a;
	a = message();
	return 0;
}
int message()
{
	printf("Viruses are written in C");
	return ;
}