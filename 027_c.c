// file 027_c.c
//Lessons 24 (FromtheLAMERtotheProgrammer - 46 lessons)

#include <stdio.h>

void recur (int in_num);

int main ()
{
	recur (7);
	puts("Recurs - finish\n");
}

void recur (int in_num)
{
	printf("in_num = %d\n", in_num);
	--in_num;
	if (in_num <0)
		return;
	else
		recur (in_num);
}
