#include<stdio.h>
int main(int argc, char**argv)
{
	int x = 4, y = 0, z = 0;
	while (x>=0)
	{
		x--;
		y++;
		if (x == y)
		{
			continue;
		}
		else
		{
			printf("\n%d%d", x, y);
		}
	}
	return 0;
}