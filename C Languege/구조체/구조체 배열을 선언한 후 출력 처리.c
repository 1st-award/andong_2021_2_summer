#include <stdio.h>

typedef struct lecture {
	char name[20];
	int type;
	int credit;
	int hours;
} lecture;

char *lectype[] = {"교양", "일반선택", "전공필수", "전공선택"};
char *head[] = {"강좌명", "강좌 구분", "학점", "시수"};

void main(void) {
	lecture course[] = {{"인간과 사회", 0, 2, 2},
						{"경재학개론", 1, 3, 3},
						{"자료구조", 2, 3, 3},
						{"모바일프로그래밍", 2, 3, 4},
						{"고급 C프로그래밍", 3, 3, 4}};
	int i, arysize = sizeof(course)/sizeof(course[0]);
	
	printf("배열 크기: %d\n\n", sizeof(course)/sizeof(course[0]));
	printf("%12s %12s %6s %6s\n", head[0], head[1], head[2], head[3]);
	for(i=0; i<arysize; ++i) {
		printf("%16s %10s %5d %5d\n", course[i].name, lectype[course[i].type],
									course[i].credit, course[i].hours);
	}
} 

