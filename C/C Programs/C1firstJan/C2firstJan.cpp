#include<stdio.h>
#include<iostream>
using namespace std;
int main(int argc, char**argv)
{
	int leapdays=0, firstday=0, yr=0;
	long int normaldays=0, totaldays=0;
	cout << "Enter year ";
	cin >> yr;
	normaldays = (yr - 1) * 365L;
	leapdays = (yr - 1) / 4 - (yr - 1) / 100 + (yr - 1) / 100;
	totaldays = normaldays + leapdays;
	firstday = totaldays % 7;
	if (firstday == 0)
		printf("Monday ");
	if (firstday==1)
	{
		printf("Tuesday ");
	}
	if (firstday ==2)
	{
		printf("Wednesday");
	}
	if (firstday==3)
	{
		printf("Thursday ");
	}
	if (firstday == 4)
	{
		printf("Friday ");
	}
	if (firstday == 5)
	{
		printf("Saturday");
	}
	if (firstday == 6)
	{
		printf("sunday ");
	}
	return 0;
}