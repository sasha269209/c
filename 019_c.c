// file 019_c.c
//Lessons 18 (FromtheLAMERtotheProgrammer - 46 lessons)

#include <stdio.h>

int main ()
{
	fprintf(stdout, "Some chose\n");
	fprintf(stdout, "1- 1*10 = \n");
	fprintf(stdout, "2- 2*10 = \n");
	fprintf(stdout, "3- 3*10 = \n");
	fprintf(stdout, "4- 4*10 = \n");
	int number;
	fscanf(stdin, "%d", &number);

	switch(number) {
	case 1: fprintf(stdout, " 1*10 = 10\n");
	break;
	case 2: fprintf(stdout, " 2*10 = 20\n");
	break;
	case 3: fprintf(stdout, " 3*10 = 30\n");
	break;
	case 4: fprintf(stdout, " 4*10 = 40\n");
	break;
	default: fprintf(stdout, " This not number from 1 to 4\n");
	}

	fprintf(stdout, "Thankyou\n");
}