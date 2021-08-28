/*
	����� ����� ����Ϸ� �մϴ�. ������ ����� ����� ������� �Ʒ��� �����ϴ�.
	=====
	1�ܰ� -> 0~20��		-> 430��
	2�ܰ� -> 21~30��	-> 570��
	3�ܰ� -> 31�� �̻�	-> 840�� 
	=====
	�� ������� ���ϼ���.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int *);
int solution(int usage) {
	// 20�� ���Ϸ� ��� 
	if(usage<21)
		return usage*430;
	// 30�� ���Ϸ� ��� 
	else if(usage<31)
		// 1�ܰ� �ִ��� 8600 + (��뷮-20) * 2�ܰ� ��� 
		return 8600 + (usage-20)*570;
	// 31�� �̻� ��� 
	else
		// 1, 2�ܰ� �ִ��� 14300 + (��뷮-30) * 3�ܰ� ��� 
		return 14300 + (usage-30)*840; 
}

void main(void) {
	int usage;
	SetINFO(&usage);
	printf("Result Solution: %d\n", solution(usage));
}
void SetINFO(int *usage) {
	puts("====��뷮 �Է�====");
	scanf("%d", usage);
	// ��뷮�� 0 ~ 100 
	if(*usage<0 || *usage>100)
		exit(1);
}
 
