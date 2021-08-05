#include <stdio.h>

struct date {
	int year;
	int month;
	int day
};

typedef struct date date;

typedef struct {
	char title[30];
	char company[30];
	char kinds[30];
	date release;
} software;

void main(void) {
	software VisualStudio = {"비쥬얼스튜디오 익스프레스", "MS", "통합개발환경", {2005, 4, 25}};
	printf("제품명: %s\n", VisualStudio.title);
	printf("회사: %s\n", VisualStudio.company);
	printf("종류: %s\n", VisualStudio.kinds);
	printf("출시일: %d. %d. %d\n", VisualStudio.release.year, VisualStudio.release.month, VisualStudio.release.day);
}
