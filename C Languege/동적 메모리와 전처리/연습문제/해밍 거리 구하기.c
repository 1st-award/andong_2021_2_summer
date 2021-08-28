/*
	�ع� �Ÿ�(Hamming distance)�� ���� ���̸� ���� �� ���� ���ڿ����� ���� ��ġ�� ������ ���� �ٸ� ������
	������ ���մϴ�. ���� ��� �� 2���� ���ڿ��� "10010"�� "110"�̶��, ���� �� ���ڿ��� �ڸ����� ���߱� ����
	"110"�� �տ� 0 �ΰ��� ä�� "00110"���� ����� �ݴϴ�.
	�� 2���� ���ڿ��� ù ����� �� ��° ���ڰ� ���� �ٸ��Ƿ� �ع� �Ÿ��� 2 �Դϴ�. �ع� �Ÿ��� ���ϼ���.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SetINFO(char*, char*);
int solution(char *binaryA, char *binaryB) {
	return abs(strlen(binaryA) - strlen(binaryB));
}  
void main(void) {
	// ���̴� 1 ~ 10 
	char *binaryA = (char*)malloc(sizeof(char)*10);
	char *binaryB = (char*)malloc(sizeof(char)*10);
	SetINFO(binaryA, binaryB);
	printf("Result Solution: %d\n", solution(binaryA, binaryB));
} 
void SetINFO(char *binaryA, char *binaryB) {
	puts("====binaryA �Է�====");
	scanf("%s", binaryA);
	puts("====binaryB �Է�====");
	scanf("%s", binaryB);
	// 0���� �������� �ʽ��ϴ�. 
	if(!binaryA[0] && !binaryB[0]) 
		exit(1);
}
