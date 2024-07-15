// file 029_1c_c.c
//Lessons 26 (FromtheLAMERtotheProgrammer - 46 lessons)

#include <stdio.h>
#include "029_2h_c.c"
#define SIZE 50

int main ()
{
print_str ();

char str[SIZE]="Hello\n";
print_str_arg (str);

int a, b = 120, c =250;
a = summ (b,c);
printf("Result of summ %d\n", a);
}
