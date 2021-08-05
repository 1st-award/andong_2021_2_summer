// 두명의 이름과 국어, 영어 점수를 입력받아 합계를 구하여 모두 출력하는 프로그램을 적상하시오.
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
	for(i=0; i<2; ++i) {
		printf("%s %d %d\n", userInfo[i].name, userInfo[i].korea, userInfo[i].english);
	}
} 

UserInfo *InputInfo(void) {
	static UserInfo input[2];
	char name[20];
	int i;
	printf("유저 정보를 입력해주세요.\n");
	for(i=0; i<2; ++i) {
		scanf("%s %d %d", name, &input[i].korea, &input[i].english);
		strcpy(input[i].name, name);
	}
	return input;
}
