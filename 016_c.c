// file 015_c.c
//Lessons 14 (FromtheLAMERtotheProgrammer - 46 lessons)

#include <stdio.h>

int main ()
{
	int yes = 1;
	int no  = 0;

	printf("! yes = %d\n", ! yes );
	printf("! no = %d\n", ! no );
	printf("\n");
	printf(" no AND no = %d\n", no && no);
	printf(" yes AND no = %d\n", yes && no);
	printf(" no AND yes = %d\n", no && yes);
	printf(" yes AND yes = %d\n", yes && yes);
	printf("\n");
	printf(" no OR no = %d\n", no || no);
	printf(" yes OR no = %d\n", yes || no);
	printf(" no OR yes = %d\n", no || yes);
	printf(" yes OR yes = %d\n", yes || yes);
	printf("\n");
}