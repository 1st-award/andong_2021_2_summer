// 자신의 이름과 나이를 초기화하고 친구의 이름과 나이를 입력받아 모두 출력하는 프로그램을 작성하시오. 
#include <stdio.h>
#include <string.h>
 
typedef struct UserInfo {
	char name[20];
	int age;
} UserInfo;

void InputFriendInfo(UserInfo *);

void main(void) {
	UserInfo myInfo[2];
	strcpy(myInfo[0].name, "문은비");
	myInfo[0].age = 12; 
	
	InputFriendInfo(&myInfo[1]);
	printf("당신의 이름 : %s, 나이 : %d\n", myInfo[0].name, myInfo[0].age);
	printf("친구의 이름 : %s, 나이 : %d\n", myInfo[1].name, myInfo[1].age);
}

void InputFriendInfo(UserInfo *_getMyInfo) {
	printf("친한 친구의 이름과 나이를 입력하세요. ");
	scanf("%s %d", &_getMyInfo->name, &_getMyInfo->age);
}

