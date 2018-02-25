#include<stdio.h>
#include<conio.h>
int main(int argc, char**argv)
{
	int m1, m2, m3, m4, m5, aggr;
	float per;
	printf("Enter marks in 5 subjects:");
	scanf("%d%d%d%d%d", &m1, &m2, &m3, m4, m5);
	aggr = m1 + m2 + m3 + m4 + m5;
	per = aggr / 5;
	printf("Aggregate Marks = %d", aggr);
	printf("Percentage Marks=%f", per);
	return 0;
}