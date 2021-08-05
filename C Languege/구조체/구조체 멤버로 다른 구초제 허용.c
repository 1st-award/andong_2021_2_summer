#include <stdio.h>
#include <string.h>

struct date {
	int year;
	int month;
	int day;
};

struct account {
	struct date opendate;
	char name[12];
	int actnum;
	double balance;
};

void main(void) {
	struct account me = {{2012, 3, 9}, "홍길동", 1001, 300000};
	
	printf("구조체크기: %d\n", sizeof(me));
	printf("[%d, %d, %d]\n", me.opendate.year, me.opendate.month, me.opendate.day);
	printf("%s %d %.2f\n", me.name, me.actnum, me.balance); 
}
