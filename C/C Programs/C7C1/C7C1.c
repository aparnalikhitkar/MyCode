#include<stdio.h>
#include<conio.h>


#define ISUPPER(x) (x>=65 && x<=90?1:0)
#define ISLOWER(x)  (x>=97 && x<= 122?1:0)
#define ISALPHA(x) (ISUPPER(x) || SLOWER(x))
#define BIG(x,y) (x>y ? x:y)
int main(int argc, char**argv)
{
	char ch;
	int d, a, b;
	printf("Enter any alphabet / character ");
	scanf_s("%c", &ch);
	if (d = ISUPPER(ch) == 1)
		printf("You entered a capital letter ");
	else if (d = ISLOWER(ch) == 1)
		printf("You entered a small case letter");
	else if (d = ISALPHA(ch) != 1)
		printf("YOU enterd character other thhan an alphabet ");
	printf("Enter any two numbers ");
	scanf_s("%d%d", &a, &b);
	
	
	d = BIG(a, b);
	printf("Bigger number is %d", d);
	

		
	return 0;
}