// 5���� ������� �Է¹޾� ������� ��ȣ�� ������� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>

typedef struct UserInfo {
	int accountNo;
	int balance;
} UserInfo;

UserInfo *InputInfo(void);
void PrintBalanceKing(UserInfo *);

void main(void) {
	PrintBalanceKing(InputInfo());
} 
UserInfo *InputInfo(void) {
	static UserInfo input[5];
	int i;
	for(i=0; i<5; ++i) {
		printf("%d�� ����ݾ���? ", i+1);
		scanf("%d", &input[i].balance);
		input[i].accountNo = i;
	}
	return input;
}
void PrintBalanceKing(UserInfo *_getUser) {
	int max = _getUser[0].balance;
	int i, accountNum;
	for(i=1; i<5; ++i) {
		if(max<_getUser[i].balance) {
			accountNum = i+1;
			max = _getUser[i].balance;
		}
	}
	printf("����� %d�� %d��\n", accountNum, max);
}
