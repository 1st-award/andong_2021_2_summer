// 5명의 이름과 키를 입력받아 키가 가장 작은 사람의 이름과 키를 출력하는 프로그램을 작성하시오.
#include <stdio.h>
#include <string.h>

typedef struct UserInfo {
	char name[20];
	int tall;
} UserInfo;

UserInfo *InputInfo(void);
void PrintSmallest(UserInfo *);

void main(void) {
	PrintSmallest(InputInfo());
}
UserInfo *InputInfo(void) {
	static UserInfo input[5];
	char name[20];
	int i;
	for(i=0; i<5; ++i) {
		scanf("%s %d", name, &input[i].tall);
		strcpy(input[i].name, name);
	}
	return input;
}
void PrintSmallest(UserInfo *_getInfo) {
	int tall = _getInfo[0].tall;
	int i, userNo;
	for(i=1; i<5; ++i) {
		if(tall>_getInfo[i].tall) {
			tall = _getInfo[i].tall;
			userNo = i;
		}
	}
	printf("%s %d\n", _getInfo[userNo], tall);
}
