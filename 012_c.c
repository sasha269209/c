//Lessons 11 (FromtheLAMERtotheProgrammer - 46 lessons)

#include <stdio.h>
#define NAME_STR "Test"
#define DOLAR "$"
#define SYMBOL "!@#$%^&*+-\\/()"
#define ELEVEN 11
#define LINE "__________________"

int main ()
{
	const int NUM = 33;
	const int NUM_8 = 043;
	const int NUM_H = 0x76FF;
	const char STROKA[] = "String constant";

	printf("%s\n", DOLAR);
	printf("%s\n", SYMBOL);
	printf("%d\n", NUM);
	printf("%p\n", NUM_H);
	printf("%s\n", STROKA);
	printf("Sum = %d\n", ELEVEN + NUM);
}