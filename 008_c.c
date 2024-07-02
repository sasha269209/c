//Lessons 7 (FromtheLAMERtotheProgrammer - 46 lessons)

#include <stdio.h>

static int a = 5;

int main ()
{
	extern int a;  // From this file 008_c.c
	extern int b;  // From external file 008a_c.c

	printf("a = %i\n", a);
	printf("b = %i\n", b);


}