// �̸��� ���̸� �Է¹޾� ������ ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>

typedef struct userinfo {
	char name[10];
	int age;
} userinfo;

userinfo *InputInfo(void);
void main(void) {
	userinfo *info = InputInfo();
	printf("����� �̸��� %s�̰� ���̴� %d���̱���.\n", info->name, info->age);
}
userinfo *InputInfo(void) {
	static userinfo input;
	printf("����� �̸��� �����Դϱ�? ");
	scanf("%s", &input.name);
	printf("����� ���̴� �� ���Դϱ�? ");
	scanf("%d", &input.age);
	return &input;
} 
