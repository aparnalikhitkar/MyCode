#include<stdio.h>
void func();
int main(int argc, char**argv)
{
	func();
	func();
	return 0;
}
void func()
{
	auto int i = 0;
	register int j = 0;
	static int k = 0;
	i++;
	j++;
	k++;
	printf("%d%d%d", i, j, k);
}