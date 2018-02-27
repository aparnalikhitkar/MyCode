#include<stdio.h>
int main(int argc, char**argv)
{
	int x = 4, y = 0, z = 0;
	while (x>=0)
	{
		if (x == y)

			break;
		else
			printf("%d%d", x, y);
		x--;
		y++;

	}
	return 0;
}