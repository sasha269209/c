// file 015_c.c
//Lessons 14 (FromtheLAMERtotheProgrammer - 46 lessons)

#include <stdio.h>

int main ()
{
	int a, b, c, d;
	a = 3;
	b = 5;
	c = 4;
	d = 5;
	char letter = 'A', let = 'a';

	printf("a = %d b = %d c = %d\n",a ,b, c);
	printf("\n");
	printf("a == b  ? -  %d\n", a == b);
	printf("a != c  ? -  %d\n", a != c);
	printf("b == ++c  ? -  %d\n", b == ++c);
	printf("b == c  ? -  %d\n", b == c);
	printf("a == b == cc  ? -  %d\n", a == b == c);
	// Next 5 == 5 == 5  ???
	printf("\n");
	printf("5 == 5 == 5  ? -  %d\n", 5 == 5 == 5);
	printf("\n");
	printf("a == b  ? -  %d\n", a == b);

	printf("A == a  ? -  %d\n", letter == let);
	
}