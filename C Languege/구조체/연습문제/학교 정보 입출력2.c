/* "�б���", "�г�"�� ������ �� �ִ� ����ü�� 2���� ������ ������ ��, 
	�� ���� ������ �б��� "�����ʵ��б�" ,�г⿡ 6���� ���� �ʱ�ȭ�ϰ�
	�ٸ� �������� ���ο� �б��� �г��� �Է¹޾� �Ʒ��� ���� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
#include <stdio.h>
#include <string.h>

typedef struct UserInfo {
	char schoolName[20];
	int grade;
} UserInfo;

void InputInfo(UserInfo *);

void main(void) {
	UserInfo info[2];
	strcpy(info[0].schoolName, "�����ʵ��б�");
	info[0].grade = 6;
	
	InputInfo(&info[1]);
	printf("%12s %d�г�\n", info[0].schoolName, info[0].grade);
	printf("%12s %d�г�\n", info[1].schoolName, info[1].grade);
}
void InputInfo(UserInfo *_getInfo) {
	printf("�б��̸� �г� �Է� : ");
	scanf("%s %d", &_getInfo->schoolName, &_getInfo->grade);
}
