// 5명의 저축액을 입력받아 저축왕의 번호와 저축액을 출력하는 프로그램을 작성하시오.
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
		printf("%d번 저축금액은? ", i+1);
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
	printf("저축왕 %d번 %d원\n", accountNum, max);
}
