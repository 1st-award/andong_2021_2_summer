// 여행객 교통비 구하기 정답.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int solution(int member_age[], int member_age_len, char *transportation) {
	int answer = 0;
	int total_transportation_expenses = 0;
	int adult_expense = 0;
	int child_expense = 0;
	int i;
	
	if(!strcmp(transportation, "Bus")) {
		adult_expense = 40000;
		child_expense = 15000;
	}
	else if(!strcmp(transportation, "Ship")) {
		adult_expense = 30000;
		child_expense = 13000;
	}
	else if(!strcmp(transportation, "Airplane")) {
		adult_expense = 70000;
		child_expense = 45000;
	}
	if(member_age_len >= 10) {
		adult_expense = adult_expense / 10 * 9;
		child_expense = child_expense / 10 * 8;
	}
	for(i=0; i<member_age_len; ++i) {
		if(member_age[i] > 19)
			total_transportation_expenses += adult_expense;
		else
			total_transportation_expenses += child_expense;
	}
	answer = total_transportation_expenses;
	return answer;
}

void main(void) {
	int member_age1[5] = {13, 33, 45, 11, 20};
	int member_age1_len = 5;
	char *transportations1 = "Bus";
	int ret1 = solution(member_age1, member_age1_len, transportations1);
	printf("Result Solution: %d\n", ret1);
	
	int member_age2[10] = {25, 11, 27, 56, 7, 19, 52, 31, 77, 8};
	int member_age2_len = 10;
	char *transportations2 = "Ship";
	int ret2 = solution(member_age2, member_age2_len, transportations2);
	printf("Result Solution: %d\n", ret2);
} 
