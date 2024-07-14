// file 025_c.c
//Lessons 22 (FromtheLAMERtotheProgrammer - 46 lessons)

#include <stdio.h>

//Propotype function 
void print_hello ();
int add_number ();
int add_number_2 ();
char str ();

int main ()
{
	print_hello();
	printf("RETURN - Function add_number = %i\n", add_number());
	int num = add_number();
	printf("RETURN - Function add_number + num = %i\n", num);
	printf("RETURN - Function add_number_2 = %i\n", add_number_2());
	str ();
}

void print_hello ()
{
	printf("Hello Function\n");
}

int add_number ()
{
	int a = 10, b =35;
	return a + b;
}

int add_number_2 () //Add additional c
{
	int a = 10, b =35;
	int c = a + b;
	return c;
}

char str ()
{
	int a = 10, b =35;
	printf("Return str: %d\n", a+b);
	// Varian with return 
	// return printf("Return str: %d\n", a+b);
}