// �ڽ��� �̸��� ���̸� �ʱ�ȭ�ϰ� ģ���� �̸��� ���̸� �Է¹޾� ��� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
#include <stdio.h>
#include <string.h>
 
typedef struct UserInfo {
	char name[20];
	int age;
} UserInfo;

void InputFriendInfo(UserInfo *);

void main(void) {
	UserInfo myInfo[2];
	strcpy(myInfo[0].name, "������");
	myInfo[0].age = 12; 
	
	InputFriendInfo(&myInfo[1]);
	printf("����� �̸� : %s, ���� : %d\n", myInfo[0].name, myInfo[0].age);
	printf("ģ���� �̸� : %s, ���� : %d\n", myInfo[1].name, myInfo[1].age);
}

void InputFriendInfo(UserInfo *_getMyInfo) {
	printf("ģ�� ģ���� �̸��� ���̸� �Է��ϼ���. ");
	scanf("%s %d", &_getMyInfo->name, &_getMyInfo->age);
}

