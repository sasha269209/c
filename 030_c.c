// file 030_c.c
//Lessons 27 (FromtheLAMERtotheProgrammer - 46 lessons)

#include <stdio.h>
#include <string.h>
#define SIZE 9

int main ()
{
	// 
	int number = 15;
	int *p_number;
	p_number = &number;
	printf("Value = %d, address = %p\n", *p_number, p_number);

	//
	int number_ = 155;
	int *p_number_ = &number_;
	printf("Value = %d, address = %p\n", *p_number_, p_number_);

	//Massiv
	int massiv[] = {1,2,333,4,5,6,7,8,9};
	int *p_muss_number;
	p_muss_number = massiv; // No &
	for(int i=0; i< SIZE; i++)
	{
		fprintf(stdout, "Index[%d], value[%d], points[%p]\n", 
			i, *p_muss_number, p_muss_number);
		*p_muss_number++;
	}

	//
	char string[] = "Sasha";
	char *p_mass_char = string;
	for(int i=0; i < strlen(string); i++)
	{
		if(*p_mass_char == 'a')
		{
			*p_mass_char = 'o';
		}

		fprintf(stdout, "%c", *p_mass_char);
		*p_mass_char++;
	}
	puts("\n");
}