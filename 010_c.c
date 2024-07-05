//Lessons 8 (FromtheLAMERtotheProgrammer - 46 lessons)

#include <stdio.h>

int main ()
{
	char ar_str_1 [4] = {'a', 'b', 'c', '\0'};
	char ar_str_2 [] = {"abc"};

	int num_1 [3] = {10, 20,1};
	int num_2 [3];
	num_2[0] = 10;
	num_2[1] = 20;
	num_2[2] = 1;

	for (int i=0; i<4; i++)
	{
		printf("%c", ar_str_1[i] );
	}
	printf("\n");

	for (int j=0; j<4; j++)
		printf("%c", ar_str_2[j] );
	printf("\n");

	printf ("1 - el = %d\n", num_1[0]);
	printf ("2 - el = %d\n", num_1[1]);
	printf ("3 - el = %d\n", num_1[2]);

	for (int k=0; k<3; k++)
		printf("%d - el = %d\n", k + 1, num_2[k]);
	printf("\n");
}