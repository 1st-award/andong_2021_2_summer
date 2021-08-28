/*
	여행객들의 총 교통비를 계산하려고 합니다. 교통편은 "Bus", "Ship", "Airplane" 총 3가지입니다.
	나이가 20살 이상이면 어른 요금을, 그렇지 않으면 어린이 요금을 받습니다.
	여행객들이 10명 이상인 경우 연령에 따라 할인을 받습니다. 총 교통비를 return 하세요.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void InputINFO(int *, int *, char *);
int solution(int *member_age, int member_age_len, char *transportation) {
	int i, audult_sum = 0, child_sum = 0;
	for(i=0; i<member_age_len; ++i) {
		// 교통편이 버스일때 
		if(strcmp(transportation, "Bus") == 0) {
			//어른 
			if(member_age[i] >= 20)
				audult_sum+=40000;
			// 어린이 
			else
				child_sum+=15000; 
		}
		// 교통편이 배일때 
		else if(strcmp(transportation, "Ship") == 0) {
			// 어른
			if(member_age[i] >= 20)
				audult_sum+=30000; 
			// 어린이 
			else
				child_sum+=13000; 
		}
		// 교통편이 비행기일때 
		else if(strcmp(transportation, "Airplane") == 0) {
			// 어른
			if(member_age[i] >= 20)
				audult_sum+=70000;
			// 어린이 
			else
				child_sum+=45000; 
		}
	}
	// 여행객이 10명 이상일 때 할인
	if(member_age_len >= 10) {
		// 어른 10% 할인 
		audult_sum *= 0.9;
		// 어린이 20% 할인
		child_sum *= 0.8; 
	} 
	return audult_sum + child_sum;
}

void main(void) {
	// member_age_len은 1~100 
	int *member_age = (int*)calloc(100, sizeof(int));
	int member_age_len;
	char *transportation = (char*)calloc(10, sizeof(int));
	InputINFO(member_age, &member_age_len, transportation);
	printf("Solution Result: %d", solution(member_age, member_age_len, transportation));
}
void InputINFO(int *member_age, int *member_age_len, char *transportation) {
	int i, num;
	puts("여행객 나이 입력");
	for(i=0;i<100;++i) {
		scanf("%d", &num);
		if(num == -1)
			break;
		else if(num<0 || num>1000)
			exit(1);
		else
			member_age[i] = num;
	}
	if(i<0 || i==100)
		exit(1);
	*member_age_len = i;
	puts("운송수단 입력");
	scanf("%s", transportation); 
}
