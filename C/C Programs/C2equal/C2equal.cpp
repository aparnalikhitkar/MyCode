#include<stdio.h>
#include<iostream>
using namespace std;
int main(int argc, char**argv)
{
	int n=0, a=0, b=0, num=0;
	long int renum = 0;
	cout<<"Enter a five digit number ";
	cin>>n;
	num = n;
	a = n % 10;
	n = n / 10;
	renum = renum + a * 10000L;

	a = n % 10;
	n = n / 10;
	renum = renum + a * 1000;

	a = n % 10;
	n = n / 10;
	renum = renum + a * 100;

	a = n % 10;
	n = n / 10;
	renum = renum + a * 10;

	a = n % 10;
	
	renum = renum + a;

	if (renum == num)
		printf("Given number & its reversed number are equal");
	else
		printf("Given number & its reversed number are not equal");


	
	return 0;
}