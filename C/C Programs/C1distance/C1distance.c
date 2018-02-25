#include<stdio.h>
#include<conio.h>
int main(int argc, char**argv)
{
	float km, m, cm, ft, inch;
	printf("\n Enter the distance in Kilometers: ");
	scanf("%f", &km);
	m = km * 100;
	cm = m * 100;
	inch = cm / 2.54;
	ft = inch / 12;
	printf("Distance i meters = %f", m);
	printf("Distance in centimeter=%f", cm);
	printf("Distance in feet =%f", ft);
	printf("Distance in inches =%f", inch);
	return 0;
}