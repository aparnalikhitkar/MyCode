#include<stdio.h>
int main(int argc, char**argv)
{
	int c = 6, sub = 3;
	//printf("Enter the class and number of subjects failed : ");
	//scanf("%d%d", &c, &sub);
	switch (c)
	{
	case 1:
		if (sub >= 1 && sub <= 3)
			printf("Student gets totals of %d grace marks ", 5 * sub);
		else
		{
			if (sub > 3)
				printf("No grace marks ");
		}
		break;
	case 3:
		if (sub == 1)
			printf("student gets 5 grace marks ");
		else
			if (sub > 1)
				printf("No grace marks ");
		break;

	default :
		printf("Wrong class entered ");
		break;
	}
	return 0;
}