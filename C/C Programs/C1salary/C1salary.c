#include<stdio.h>
#include<conio.h>
int main(int argc, char**argv)
{
	float bp, da, hra, grpay;
	printf("\n Enter the distance in Kilometers: ");
    scanf("%f",&bp);

	da = 4*bp;
	hra = 2*bp;
	grpay = bp + da + hra;

	printf("Basic Pay of Ramesh = %f",bp);
	printf("Dearness allowance=%f", da);
	printf("House Rent Allowance=%f", hra);
	printf("Gross pay of Ramesh is %f", grpay);

	return 0;
}