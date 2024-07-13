// file 022_c.c
//Lessons 21 (FromtheLAMERtotheProgrammer - 46 lessons)
#include <stdio.h>

int main ()
{
	printf("Use break\n");
	for (int i = 0; i <= 10; ++i)
	{
		if (i==5)
			break;
		printf("  %i", i);
	}
	printf("\n");

	printf("Use continue\n");
	for (int i = 0; i <= 10; ++i)
	{
		if (i==5)
			continue;
		printf("  %i", i);
	}
	printf("\n");

	printf("Use goto\n");
	for (int i = 0; i <= 10; ++i)
	{
		if (i==5)
			goto here;
		printf("  %i", i);
	}
	here:
	printf("\n");



}