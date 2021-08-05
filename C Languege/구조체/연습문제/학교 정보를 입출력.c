// "이름", "학교명", "학년"을 입력받아 아래와 같이 출력하는 프로그램을 작성하시오.
#include <stdio.h>

typedef struct UserInfo {
	char name[20];
	char schoolName[20];
	int grade;
} UserInfo;

UserInfo *InputInfo(void);

void main(void) {
	UserInfo *user = InputInfo();
	printf("%s %d학년에 재학중인 %s입니다.\n", user->schoolName, user->grade, user->name);
} 

UserInfo *InputInfo(void) {
	static UserInfo input;
	printf("이름을 입력해 주세요: ");
	scanf("%s", &input.name);
	printf("학교이름을 입력해 주세요: ");
	scanf("%s", &input.schoolName);
	printf("학년을 입력해 주세요: ");
	scanf("%d", &input.grade);
	return &input;
}
