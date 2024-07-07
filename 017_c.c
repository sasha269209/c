// file 017_c.c
//Lessons 16 (FromtheLAMERtotheProgrammer - 46 lessons)

#include <stdio.h>

int main ()
{
	//True = 1   False = 0
	(6%2 == 0) ? printf("True = 1 =  Even\n", 1) :
				 printf("False = 0 = Not even\n", 0);
	(6%2) ? printf("Not even\n") :
			printf("Even\n");
	printf("\n");

	(33%2 == 0) ? printf("True = 1 =  Even\n", 1) :
				 printf("False = 0 = Not even\n", 0);
	(33%2) ? printf("Not even\n") :
			printf("Even\n");
	printf("\n");

	int num = 33%2;
	(num) ? printf("Not even\n") :
			printf("Even\n");
	printf("\n");

	int k, a = 10, b = 4;
	k = (a > b) ? a: b;
	printf("k = %d\n", k);
	printf("\n");

	int cat = 1;
	printf("On the window sits %d %s\n", cat, 
		(cat == 1) ? "cat" : "cats");
	++cat;
	printf("On the window sits %d %s\n", cat, 
		(cat == 1) ? "cat" : "cats");
}