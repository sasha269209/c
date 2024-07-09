// file 020_c.c
//Lessons 19 (FromtheLAMERtotheProgrammer - 46 lessons)

#include <stdio.h>


int main ()
{
	printf("Print numbers from 0 to 10\n");

	int number = 0;
	while(number<=10)
	{
		printf("Number = %i\n", number);
		++number;
	}
	printf("\n");

	printf("Write - \"y\"\n");
	char symbol = 'y';
	while(symbol == 'y')
	{
		printf("Woud you like continue ?\n");
		printf("If yes write - \"y\"\n");
		scanf("%s", &symbol);
	}
	printf("THANKS\n");
	printf("\n");

	printf("do - while\n");
	int pin;
	do
	{
	printf("Plese write PIN\n");
	scanf("%i", &pin);
	}
	while(pin != 1234 );
	printf("PIN - correct - Thank you\n");
}