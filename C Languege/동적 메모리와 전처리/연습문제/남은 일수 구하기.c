/* 
	���� ��¥�� �� ��¥�� �־��� ��, �� ��¥�� ��ĥ��ŭ ������ �ִ���(D-Day)�� ���Ϸ� �մϴ�.
	�̸� ���� ������ ���� 3�ܰ�� ������ ���α׷� ������ �ۼ��߽��ϴ�. (��, ������ ������� �ʽ��ϴ�.)
	
	1�ܰ�. ���� ��¥�� 1�� 1�Ϸκ��� ��ĥ��ŭ ������ �ִ��� ���մϴ�.
	2�ܰ�. �� ��¥�� 1�� 1�Ϸκ��� ��ĥ��ŭ ������ �ִ��� ���մϴ�.
	3�ܰ�. (2�ܰ迡�� ���� ��¥) - (1�ܰ迡�� ���� ��¥)�� ���մϴ�.
*/
#include <stdio.h>
#include <stdlib.h>

void SetDay(int *, int *, int *, int *);
int CalcDay(int *, int *, int *, int *);
void main(void) {
	int *start_month = (int*)malloc(sizeof(int));
	int *start_day = (int*)malloc(sizeof(int));
	int *end_month = (int*)malloc(sizeof(int));
	int *end_day = (int*)malloc(sizeof(int));
	
	SetDay(start_month, start_day, end_month, end_day);
	printf("���� ��¥�� ���� ��¥�� ���� %d\n", 
			CalcDay(start_month, start_day, end_month, end_day));
	 
} 

void SetDay(int *_setStartMonth, int *_setStartDay, int *_setEndMonth, int *_setEndDay) {
	printf("���� ��, ���� �Է�: ");
	scanf("%d %d", _setStartMonth, _setStartDay);
	printf("���� ��, ���� �Է�: ");
	scanf("%d %d", _setEndMonth, _setEndDay); 
}
int CalcDay(int *_getStartMonth, int *_getStartDay, int *_getEndMonth, int *_getEndDay) {
	int Month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	int i;
	
	if(*_getStartMonth == *_getEndMonth)
		return *_getEndDay - *_getStartDay;
	else if(*_getStartMonth > *_getEndMonth) {
		puts("���� ����\nstart_month <= end_month�� �׻� �����մϴ�.");
		exit(-1);
	}
	else {
		for(i=*_getStartMonth-1; i>=1; --i) {
			*_getStartDay += Month[i-1];
		}
		for(i=*_getEndMonth-1; i>=1; --i) {
			*_getEndDay += Month[i-1];
		}
		// printf("%d %d\n", *_getEndDay, *_getStartDay);
		return *_getEndDay - *_getStartDay;
	}
}
