/*creat structure of 200 customer's bank data */
#include<stdio.h>
#include<conio.h>
void fun()         /*function to limk the floating point format */
{
	float f, *ff = &f;
}
struct customer
{
	int acc_no;
	char name[20];
	float bal_i_acc;

};
struct customer cust[200];
void with_dep(int ano, float amount);
void deposit(int ano, float amount);
void withdrawal(int ano, float amount);
void low_bal();
void display();
void set_cust_data();
int main(int argc, char**argv)
{
	int i = 0, ano = 0, choice = 0; 
	float amount = 0;
	set_cust_data();
	low_bal();
	printf("Enter the account number and the amount to be deposited/withdeawn ");
	scanf_s("%d%f", &ano, &amount);
	with_dep(ano, amount);
	display();

	return 0;
}
void with_dep(int ano, float amount)
{
	int choice = 0;
	printf("Enter 1 for Deposit \t \t Enter 0 for With");
	scanf_s("%d", & choice);
	switch (choice)
	{
	case 1:
		deposit(ano, amount);
		break;
	case 0:
		withdrawal(ano, amount);
		break;
	default:
		printf("\n you entered Wrong choice");

		break;
	}


}

void deposit(int ano, float amount)
{
	int i = 0, j = 0;
	for (i = 0; i < 200; i++)
	{
		if (cust[i].bal_i_acc==ano)
		{
			cust[i].bal_i_acc += amount;
			j = 1;
		}
	}
	if (j == 0)
	{
		printf("\n\t Wrong Account Number ");
	}
}
void withdrawal(int ano, float amount)
{
	int i, j = 0;
	for (i = 0; i < 200; i++)
	{
		if (cust[i].acc_no == ano)
		{
			j = 1;
			if (cust[i].bal_i_acc < 100)
			{
				printf("\n\t\t The Balance is insufficient for the specified Withdrawal ");
			}
			else
			{
				if (cust[i].bal_i_acc>=100)
				{
					cust[i].bal_i_acc -= amount;
				}
				else
				{
					printf("\n withdrawal amount should be less than or eqaul to %f Rs.", cust[i].bal_i_acc - 100);
				}
			}
		}
	}
	if (j == 0)
		printf("\n\t Wrong Account Number ");
}
void low_bal()
{
	int i = 0, j = 0;
	printf("\n\n Name and Account number of the customers \n whose balance is less than 100");
	for ( i = 0; i < 200; i++)
	{
		j = 1;
		printf("\n\tCustomer Number = %d", i + 1);
		printf("\n\t\t Account Number of Customer = %d", cust[i].acc_no);
		printf("\n\t\t Name of Customer = %s ", cust[i].name);
	}
	if (j == 0)
	{
		printf("\n\t Every Customer has more than minimum balance amount");
	}
}
void display()
{
	
	for (int i = 0; i < 200; i++)
	{
		printf("\n\n\t Customer Number = %d ", i + 1);
		printf("\n\n\t Account Number of Customer = %d", cust[i].acc_no);
		printf("\n\t  Name of Customer = %s", cust[i].name);
		printf("\n\tBalance Amount of Customer = %.3f", cust[i].bal_i_acc);
	}
}

void set_cust_data()
{
	int i;
	for ( i = 0; i < 200; i++)
	{
		printf("\n\nENter the Account number of  the Customer\n\t ");
		scanf_s("%d", &cust[i].acc_no);
		fflush(stdin);
		printf("\nENter the name of the Customer \n\t ");
		scanf_s("%s", &cust[i].name);
		printf("\nEnter the balance amount in the Customer account \n\t ");
		scanf_s("%f", &cust[i].bal_i_acc);
	}
}