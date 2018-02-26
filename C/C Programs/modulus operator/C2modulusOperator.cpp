#include<cstdio>
int main(int argc, char**argv)
{
	int yr = 2012;
	printf("Enter a year ");
	scanf("%d", &yr);
	if (yr % 100 == 0)
	{
		if (yr % 400 == 0)
		{
			printf("Leep year ");

		}
		else
		{
			printf("not a Leap year ");
		}

	}
	else
	{
		if (yr % 4 == 0)
		{
			printf("Leap year ");

		}
		else
		{
			printf("Not a Leap year ");
		}
	}
	return 0;
}