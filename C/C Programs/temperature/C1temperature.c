#include<stdio.h>
int main(int argc, char**argv)
{
	float fr, cent;
	printf("Enter the temperure(F):");
	scanf("%f",&fr);
	cent = 5.0 / 9.0*(fr-32);
	printf("Temperature in centigrade: ");


	return 0;
}