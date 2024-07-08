// file 018_c.c
//Lessons 17 (FromtheLAMERtotheProgrammer - 46 lessons)

#include <stdio.h>

int main ()
{
	int number = 10;
	if (number == 10)
		printf("True\n");
	else
		printf("False\n");
	printf("\n");
	number+=2;
	if (number == 10)
		printf("True\n");
	else
	{
		printf("False\n");
		printf("Number is not 10 \n");
	}

	printf("\n");
	number=11;
	if (number == 10)
		printf("True\n");
	else if (number == 11)
		printf("True = 11\n");
	else
		printf("False\n");
	
	printf("\n");
	number=12;
	if (number == 10)
		printf("True\n");
	else if (number == 11)
		printf("True = 11\n");
	else if (number == 12)
		printf("True = 12\n");
	else
		printf("False\n");

	printf("\n");
	printf("Please enter number: ");
	scanf("%d", &number);
	if ((number < 11) && (number >= 0))
		printf("0-10\n");
	else if ((number < 21) && (number >=11 ))
		printf("11-20\n");
	else if ((number < 31) && (number >= 21))
		printf("21-30\n");
	else
		printf("more than 30\n");




}