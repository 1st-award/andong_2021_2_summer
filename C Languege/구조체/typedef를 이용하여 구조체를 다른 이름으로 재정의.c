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
	software VisualStudio = {"�����Ʃ��� �ͽ�������", "MS", "���հ���ȯ��", {2005, 4, 25}};
	printf("��ǰ��: %s\n", VisualStudio.title);
	printf("ȸ��: %s\n", VisualStudio.company);
	printf("����: %s\n", VisualStudio.kinds);
	printf("�����: %d. %d. %d\n", VisualStudio.release.year, VisualStudio.release.month, VisualStudio.release.day);
}
