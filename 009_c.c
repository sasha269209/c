// file 009_c.c
//Lessons 8 (FromtheLAMERtotheProgrammer - 46 lessons)

#include <stdio.h>

int main ()
{
	int two = 2;
	float a = 3 / (two + 0.0);
	printf("a = %1.1f\n", a);

	int two2 = 2;
	float a2 = 3 / (float) two2;
	printf("a2 = %1.1f\n", a2);

	float x = 5.2;
	int s = (int) x;
	printf("s = %d\n", s);


	int one = 1;
	int four = 4;
	int five = 5;
	printf("One_int = %d\n", one );
	printf("One_float = %1.1f\n", one + 0.0);
	printf("Four_int = %d\n", four );
	printf("Four_float = %1.1f\n", (float) four);
	int index = ( four / (float) one); // ???
	printf("index = %d\n", index);
}