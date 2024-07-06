// file 004_c.c
//Lessons 3 (FromtheLAMERtotheProgrammer - 46 lessons)

#include <stdio.h>

int main ()
{
	int age, weight;
	char name[50];

	printf("Plese write yor name:  ");
	scanf("%s", name);

	printf("Please write yor age: ");
	scanf("%d", &age);

	printf("Please write yor waight: ");
	scanf("%d", &weight);

	printf("Print your information:\n");
	printf("Your name %s, your age %d years, your weight %d kg.\n", name, age, weight);

	printf("Addres memory with your name - %p\n", &name);
}