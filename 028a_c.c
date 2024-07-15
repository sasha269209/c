// file 028_c.c
//Lessons 25 (FromtheLAMERtotheProgrammer - 46 lessons)
//Comparisom two files file 028_c.c and 028a_c.c by utility diff
//diff 028_c.c 028a_c.c
//diff -y -W 80 028_c.c 028a_c.c

#include <stdio.h>
#define SIZE 11

int main ()
{
	char str [SIZE];
	puts("Please write your name: ");
	scanf("%10s", str);
	printf("Your name: %s\n", str);
}
