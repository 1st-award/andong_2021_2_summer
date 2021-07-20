// 표준입력의 년, 월, 일에 따라 총 일수와 요일을 출력하는 프로그램을 작성하시오.\
- 1년 1월 1일 이후로 총 일수, 즉 2년 1월 1일은 366일이 됨\
- 1년 1월 1일은 월요일이며, 7로 나눈 나머지를 이용
#include <stdio.h>

int getTotalDates(int, int, int);
int leapYear(int);
void main(void) {
	char *strDate[] = {"월", "화", "수", "목", "금", "토", "일"};
	int year, month, date, totalDates;
	
	printf("년 월 일 입력: ");
	scanf("%d %d %d", &year, &month, &date);
	totalDates = getTotalDates(year, month, date); 
	printf("총 일수 : %d, 요일 : %s\n", totalDates, strDate[totalDates%7-1]);
}

int getTotalDates(int _getYear, int _getMonth, int _getDate) {
	int i, totalDate=0, month[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	// _getYear가 윤달이면 2월달을 29로 변환 
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
