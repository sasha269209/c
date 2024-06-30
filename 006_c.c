//Lessons 5 (FromtheLAMERtotheProgrammer - 46 lessons)

#include <stdio.h>

int main ()
{
	int a = 10, b = 20, c = 3, d = 2, e = 4;
	int rez;

	rez = a + b - c * e / d;
	printf("a = 10, b = 20, c = 3, d = 2, e = 4\n");
	printf("Rezult a + b - c * e / d is %i\n",rez);

	//Enother block
	
	printf("Addition a+b %d\n", a+b);
	printf("Substracrion b-a %d\n", b-a);
	printf("Multiplication d*e %d\n", d*e);
	printf("Division e/d %d\n", e/d);
	printf("Remainder division a/e %d\n", a%e);
	printf("Increment ++e %d\n", ++e);
	printf("Increment a++ %d\n", a++);
	printf("Result previos Increment a  %d\n", a);
	printf("Decrement b-- %d\n", b--);
	printf("Result previos Decrement b  %d\n", b);

	//Enother block

	printf("Number c = %i\n", c);
	++c;
	printf("Number c++ =  %i\n", c);
	c=c-1;  // --c;
	printf("Number c=c-1  =  %i\n", c);



}