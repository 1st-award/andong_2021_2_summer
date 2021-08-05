// 이름과 나이를 입력받아 다음과 같이 출력하는 프로그램을 작성하시오.
#include <stdio.h>

typedef struct userinfo {
	char name[10];
	int age;
} userinfo;

userinfo *InputInfo(void);
void main(void) {
	userinfo *info = InputInfo();
	printf("당신의 이름은 %s이고 나이는 %d세이군요.\n", info->name, info->age);
}
userinfo *InputInfo(void) {
	static userinfo input;
	printf("당신의 이름은 무엇입니까? ");
	scanf("%s", &input.name);
	printf("당신의 나이는 몇 살입니까? ");
	scanf("%d", &input.age);
	return &input;
} 
