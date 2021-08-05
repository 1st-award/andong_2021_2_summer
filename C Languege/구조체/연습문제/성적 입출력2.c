// 두 명의 이름과 국어, 영어 점수를 입력받아 과목별 점수의 평균을 구하여 출력하는 프로그램을 작성해 보시오.
#include <stdio.h>
#include <string.h>

typedef struct UserInfo {
	char name[20];
	int korea;
	int english;
} UserInfo; 

UserInfo *InputInfo(void);

void main(void) {
	UserInfo *userInfo = InputInfo();
	int i;
	int koreaSum = 0;
	int englishSum = 0;
	for(i=0; i<2; ++i) {
		printf("%s %d %d\n", userInfo[i].name, userInfo[i].korea, userInfo[i].english);
		koreaSum += userInfo[i].korea;
		englishSum += userInfo[i].english;
	}
	printf("평균 %3.2f %3.2f\n", (double)koreaSum/2.0, (double)englishSum/2.0);
}

UserInfo *InputInfo(void) {
	static UserInfo input[2];
	char name[20];
	int i;
	printf("유저 정보 입력\n");
	for(i=0; i<2; ++i) {
		scanf("%s %d %d", name, &input[i].korea, &input[i].english);
		strcpy(input[i].name, name);
	}
	return input;
} 
