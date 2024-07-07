// file 014_c.c
//Lessons 13 (FromtheLAMERtotheProgrammer - 46 lessons)

#include <stdio.h>

#define SUM(a, b) (a+b)*2

#define P 2

int main ()
{
	int a, b, c, d;
	a = 3;
	b = 5;
	c =(a + b) * 2;
	d = SUM(a, b);
	printf("a = %d , b = %d\n",a, b);
	printf("c =(a + b) * 2 = %d\n", c);
	printf("d = SUM(a, b) = %d\n", d);
	printf("\n");
	
	#if P == 1
		printf("Line - 1 P=%d\n", P);
	#elif P == 2
		printf("Line - 2 P=%d\n", P);
	#else
		printf("Line - ??? P=%d\n", P);
	#endif

	getchar(); // Wait for symbol

	#undef P
	#define P 100
	printf("Now constant P = %d\n", P);
}