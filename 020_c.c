// file 020_c.c
//Lessons 19 (FromtheLAMERtotheProgrammer - 46 lessons)

#include <stdio.h>
#include <string.h>

int main ()
{
	for (int i = 0; i <= 10 ; ++i)
		printf("    %i", i);
	printf("\n");

	int number[] = {4, 56, 554, 6, 7};
	for (int i = 0; i <= 4 ; i++)
		printf("Indekc %i = %i\n",i,  number[i]);
	printf("\n");

	char str[]={"Hello world"};
	for (int i = 0; i < strlen(str) ; i++)
		printf("%c",  str[i]);
	printf("\n");
}