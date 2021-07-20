// ǥ���Է��� ��, ��, �Ͽ� ���� �� �ϼ��� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.\
- 1�� 1�� 1�� ���ķ� �� �ϼ�, �� 2�� 1�� 1���� 366���� ��\
- 1�� 1�� 1���� �������̸�, 7�� ���� �������� �̿�
#include <stdio.h>

int getTotalDates(int, int, int);
int leapYear(int);
void main(void) {
	char *strDate[] = {"��", "ȭ", "��", "��", "��", "��", "��"};
	int year, month, date, totalDates;
	
	printf("�� �� �� �Է�: ");
	scanf("%d %d %d", &year, &month, &date);
	totalDates = getTotalDates(year, month, date); 
	printf("�� �ϼ� : %d, ���� : %s\n", totalDates, strDate[totalDates%7-1]);
}

int getTotalDates(int _getYear, int _getMonth, int _getDate) {
	int i, totalDate=0, month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	// _getYear�� �����̸� 2������ 29�� ��ȯ 
	if(leapYear(_getYear)==1)	month[1] = 29;
	// _getYear 
	for(i=1; i<_getYear; ++i) {
		totalDate += 365 + leapYear(i);
	}
	// _getMonth 
	for(i=1; i<_getMonth; ++i) {
		totalDate += month[i-1];
	}
	// _getDate
	return totalDate + _getDate;
}
int leapYear(int _getYear) {
	if((_getYear%4==0)&&(_getYear%100!=0)||(_getYear%400==0)){
		// printf("%d 1\n", _getYear); 
		return 1;
	}	
	else {
		// printf("%d 0\n", _getYear);
		return 0;
	}	
}
