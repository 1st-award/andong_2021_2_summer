// "�̸�", "�б���", "�г�"�� �Է¹޾� �Ʒ��� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>

typedef struct UserInfo {
	char name[20];
	char schoolName[20];
	int grade;
} UserInfo;

UserInfo *InputInfo(void);

void main(void) {
	UserInfo *user = InputInfo();
	printf("%s %d�г⿡ �������� %s�Դϴ�.\n", user->schoolName, user->grade, user->name);
} 

UserInfo *InputInfo(void) {
	static UserInfo input;
	printf("�̸��� �Է��� �ּ���: ");
	scanf("%s", &input.name);
	printf("�б��̸��� �Է��� �ּ���: ");
	scanf("%s", &input.schoolName);
	printf("�г��� �Է��� �ּ���: ");
	scanf("%d", &input.grade);
	return &input;
}
