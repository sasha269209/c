// file 013_c.c
//Lessons 12 (FromtheLAMERtotheProgrammer - 46 lessons)

#include <stdio.h>

int main ()
{
	//exmp 1
	//enum DAYS {MONDAY, TUESDAY, WEDNESDAY, THURSDAY, 
	//FRIDAY, SATURDAY, SUNDAY};	
	
	//examp 2
	//enum DAYS {MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY,
	//	      FRIDAY, SATURDAY, SUNDAY};
	
	//examp 3
	enum DAYS {MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY,
		      FRIDAY, SATURDAY, SUNDAY} day_1;
	printf("MONDAY = %d\n", MONDAY);
	printf("TUESDAY = %d\n", TUESDAY);
	printf("WEDNESDAY = %d\n", WEDNESDAY);
	printf("THURSDAY = %d\n", THURSDAY);
	printf("FRIDAY = %d\n", FRIDAY);
	printf("SATURDAY = %d\n", SATURDAY);
	printf("SUNDAY = %d\n", SUNDAY);

	int days = MONDAY + TUESDAY + WEDNESDAY + THURSDAY + 
				FRIDAY + SATURDAY + SUNDAY;
	printf("Count days = %d\n", days);

	
	enum DAYS day = MONDAY + TUESDAY;
	days = MONDAY + SUNDAY;
	printf("Sum MONDAY + TUESDAY = %d\n", day);
	printf("Sum days - MONDAY + SUNDAY = %d\n", days);

	typedef int MYTYPE;
	MYTYPE my_var = 100;
	printf("my_var = %d\n", my_var);

	typedef char string [1000];
	string str[15] = {"Some text"};
	printf("%s\n", str);


}