#include<stdio.h>
int main(int argc, char**argv)
{
	char s[] = "Churchgate : no church no gate ";
	char t[25];
	char*ss, *tt;
	ss = s;
	while (*ss != '\0')

		*ss++ = *tt++;
	printf("\n%s", t);

	
	return 0;
}