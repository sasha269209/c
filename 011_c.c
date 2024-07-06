// file 011_c.c
//Lessons 10 (FromtheLAMERtotheProgrammer - 46 lessons)

#include <stdio.h>

int main ()
{
	int array[4][3] = {{1 ,2 ,3 },
					   {4 ,5 ,6 },
					   {7 ,8 ,9 },
					   {10,11,12}};
	printf("array 0-2 = %d\n", array[0][2]);
	array[0][2] = 33; // 3 < 33
	printf("array 0-2 = %d\n", array[0][2]);
	printf("\n");

	int mas[2][3] = {{'A','B','C'},
					 {10, 20, 30 }};
	/* Interesting changing from int to char 
	   in printf we use %c to help understand type
	*/
	printf ("Element [0] [0] = %c\n", mas[0][0]);
	printf ("Element [0] [1] = %c\n", mas[0][1]);
	printf ("Element [0] [1] = %c\n", mas[0][2]);
	printf("\n");
	printf ("Element [1] [0] = %d\n", mas[1][0]);
	printf ("Element [1] [1] = %d\n", mas[1][1]);
	printf ("Element [1] [1] = %d\n", mas[1][2]);
	printf("\n");
	mas[1][0]= 100;
	mas[1][1]= 200;
	mas[1][2]= 300;
	printf ("Element [1] [0] = %d\n", mas[1][0]);
	printf ("Element [1] [1] = %d\n", mas[1][1]);
	printf ("Element [1] [1] = %d\n", mas[1][2]);
}