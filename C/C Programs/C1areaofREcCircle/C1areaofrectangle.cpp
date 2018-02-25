#include<stdio.h>
#include<conio.h>
int main(int argc, char**argv)
{
	int l, b, r, area1, perimeter;
	float area2, circum;
	printf("Enter Length & Breadth of Rectangle :");
	scanf("%d%d", &l, &b);
	area1 = l * b;
	perimeter = 2 * l + 2 * b;
	printf("Area of Rectangle =%d", area1);
	printf("Perimeter of Rectangle=%d",perimeter);
	printf("Enter Radius of Circle");
	scanf("%d", &r);
	area2 = 3.14*r*r;
	circum = 2 * 3.14;

	printf("Area of Circle = %f", area2);
	printf("Circumference of Circle=%f", circum);

	return 0;
}