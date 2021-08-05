#include <stdio.h>

typedef struct lecture {
	char name[20];
	int type;
	int credit;
	int hours;
} lecture;

char *lectype[] = {"����", "�Ϲݼ���", "�����ʼ�", "��������"};
char *head[] = {"���¸�", "���� ����", "����", "�ü�"};

void main(void) {
	lecture course[] = {{"�ΰ��� ��ȸ", 0, 2, 2},
						{"�����а���", 1, 3, 3},
						{"�ڷᱸ��", 2, 3, 3},
						{"��������α׷���", 2, 3, 4},
						{"��� C���α׷���", 3, 3, 4}};
	int i, arysize = sizeof(course)/sizeof(course[0]);
	
	printf("�迭 ũ��: %d\n\n", sizeof(course)/sizeof(course[0]));
	printf("%12s %12s %6s %6s\n", head[0], head[1], head[2], head[3]);
	for(i=0; i<arysize; ++i) {
		printf("%16s %10s %5d %5d\n", course[i].name, lectype[course[i].type],
									course[i].credit, course[i].hours);
	}
} 

