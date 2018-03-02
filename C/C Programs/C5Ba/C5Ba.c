#include<stdio.h>
void addmult(int ii, int jj);
int main(int argc, char**argv)
{
	int i = 3, j = 4, k = 0, l = 0;
	k = addmult(i, j);
	l = addmult(i, j);
	printf("%d%d", k, i);
	return 0;
}
void addmult(int ii, int jj)
{
	int kk, ll;
	kk = ii + jj;
	ll = ii + kk;
	return(kk, ll);
}