/*
	��� �������� Ÿ�Ӹӽ��� Ÿ�� ���ŷ� ���� ���� 0�� ���� �� ü�踦 �����߽��ϴ�. ���簡 �ٲ�� ���� ������� �ǽ� �ӿ�
	0�̶� ���ڰ� ��������ϴ�. ����, ������ �� ü��� 1, 2, 3, ..., 8, 9, 11, 12, ...�� ���� 0�� ���� �ٲ�����ϴ�.
	0�� �������� ���� �ڿ��� num�� �Ű������� �־��� ��, �� ���� 1�� ���� ���� return�ϵ��� solution �Լ��� �ϼ����ּ���.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SetINFO(int *);
int solution(int num) {
	num += 1;
	char *str = (char*)calloc(18, sizeof(char));
	// ���� -> ���ڿ��� ��ȯ 
	sprintf(str, "%d", num);
	// 0 -> 1�� ��ȯ 
	int i;
	// printf("%s\n", str);
	for(i=0; i<strlen(str); ++i) {
		// printf("%c\n", str[i]);
		if(str[i] == '0')
			str[i] = '1';
	} 
	// ���ڿ� -> ������ ��ȯ 
	return atoi(str);
}

void main(void) {
	int num;
	SetINFO(&num);
	printf("Result Solution: %d", solution(num));
}�� 
void SetINFO(int *num) {
	scanf("%d", num);
}
	 
