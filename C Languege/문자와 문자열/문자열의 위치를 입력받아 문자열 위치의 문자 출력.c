// ���ڿ��� �����ϰ� "jungol olympiad"�� �ʱ�ȭ �� �� 0~14 ������ ���� 5����\
�Է� �޾� ���ڿ����� �ش��ϴ� ��ġ�� ���ڸ� ���ʷ� ����ϴ� ���α׷��� �ۼ��ÿ�.
#include <stdio.h>
#include <stdlib.h>

int *GetPosition(void);
void PrintString(int *, char *);
void main(void) {
	char *str = "jungol olympiad";
	PrintString(GetPosition(), str);
} 

int *GetPosition(void) {
	int i;
	int *arr = (int*)malloc(sizeof(int)*5);
	for(i=0; i<5; ++i) {
		scanf("%d", arr+i);
	}
	return arr;
}
void PrintString(int *_getArr, char *_getString) {
	int i;
	for(i=0; i<5; ++i) {
		printf("%c", *(_getString+*(_getArr+i)));
	}
}
