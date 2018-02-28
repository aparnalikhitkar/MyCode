#include<stdio.h>
int main(int argc, char**argv)
{
	float otpay = 0;
	int hour=0 , i = 0;
	while (i<=10)
	{
		printf("Enter no of hours worked ");
		scanf("%d", &hour);
		if (hour >= 40)
		{
			otpay = (hour - 40) * 12;
			printf()
		}

	}
	return 0;
}