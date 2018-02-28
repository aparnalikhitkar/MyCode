#include<stdio.h>
int main(int argc, char**argv)
{
	int choice, num, i;
	unsigned long int fact;
	while (1)
	{
		printf("1.Factorial ");
		printf("2.Primen");
		printf("3.Odd /Even ");
		printf("Your choice ?");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			printf("Enter number ");
			scanf("%d", &num);
			fact = 1;
			for (i = 1; i <= num; i++)
			
				fact = fact * i;
				printf("Factorial value = %lu", fact);
				break;
		case 2:
			printf("Enter number ");
			scanf("%d", &num);
			for (i = 2; i < num; i++)
			{
				if (num%i == 0)
				{
					printf("Not a prime number");
					break;
				}
			}
			if (i == num)
			{
				printf("Prime number");
				break;
			}
		case 3:
			printf("Enter number ");
			scanf("%d", &num);
			if (num % 2 == 0)
				printf("Even number ");
			else
				printf("Odd number ");
			break;
		
		}
	}
	return 0;
}

/*Menu drive ptogrram 1.Factorial of a number 2.Prime or not 3.Odd or even */