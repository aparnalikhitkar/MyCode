#include<stdio.h>
#include<conio.h>
struct stud
{
	int r_n;
	char name[20];
	char dep[15];
	char course[10];
	int y_o_j;          /*Year of joinig*/
};
struct stud s[450];   /*Array of structure*/
void set_student_data();
void display();
void name_acc_year(int);
int data_acc_rollno(int);
int main(int argc, char**argv)
{
	int i = 0, r = 0;
	int y = 0;
	printf("\n Enter the data for each Student:\n\n ");
	set_student_data();                                      /*Initialize the vaues for the students structure*/
	display();												/*Display all the element of student structure */
	printf("Enter the Tear if joining if the student ");   /*Search data on year of Joining of the Student*/
	scanf_s("%d", &y);
	name_acc_year(y);										/*year of Joining passrd to function*/
	  
	printf("\nEnter the Roll Number of the student ");
	scanf_s("%d", &r);
	data_acc_rollno(r);										/*roll number passed to fuction*/
	return 0;
}
void set_student_data()            /*Enter student data*/
{
	
	for (int i = 0; i < 450; i++)
	{
		fflush(stdin);             /*Flush the input buffer*/
		printf("\nEnter the Roll Number of the student\n");
		sscanf_s("%d", &s[i].r_n);
		fflush(stdin);
		printf("Enter the name of the student \n");
		sscanf_s("%s", s[i].name);
		fflush(stdin);
		printf("Enter the name of the Department \n");
		sscanf_s("%s", s[i].dep);
		fflush(stdin);
		printf("Enter the name of the Course \n");
		sscanf_s("%s", s[i].course);
		printf("ENter the Year of Joining of the student \n");
	}
}

void dispaly()                                /*function to dispaly data*/
{
	for (int  i = 0; i < 450; i++)
	{
		printf("\n\t Roll Number of student %d = %d \n", i + 1, s[i].r_n);
		printf("\n\tName of the student %d= %s \n ", i + 1, s[i].name);
		printf("\n\t Name of the department = %s \n", s[i].dep);
		printf("\n\t Name of the Course = %s \n", s[i].course);
		printf("\n\t Year of Joining of student %d = %d \n\n", i + 1, s[i].y_o_j);

	}
}

void name_acc_year(int y)              /*function to get name based on year of joing*/
{
	int i = 0 ,j = 0;
	for (i = 0; i < 450; i++)
	{
		if (y == s[i].y_o_j)
		{
			printf("%s joined in the year %d \n", s[i].name,s[i].y_o_j);
			j = 1;
		}
	}
	if (j == 0)
		printf("\n No student joined in the year %d", y);
}

int data_acc_rollno(int r)						/*function to get student data based on roll number */
{
	int i, j = 0;
	for (i = 0; i < 450; i++)
	{
		if (s[i].r_n==r)
		{
			printf("\n\t Roll Number of student = %d \n", s[i].r_n);
			printf("\n\t Name of student = %s\n " ,s[i].name);
			printf("\n\t Name of Department = %s\n", s[i].dep);
			printf("\n\t Name of Course = %s\n", s[i].course);
			printf("\n\t Year of Joining of student = %d\n\n", s[i].y_o_j);
			j = 1;
		}
	}
	if (j == 0)
	{
		printf("\n No such Roll Number Present ");
	}
	return 0;
}