#include<stdio.h>
void message();
int main(int argc, char**argv)
{
	message(message());
	return 0;
}
void message()
{
	printf("Praise worthy and C worthy are synonyms");
}