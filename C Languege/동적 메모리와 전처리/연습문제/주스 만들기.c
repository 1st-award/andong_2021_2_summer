/*
	�ֽ� 1���� ������� ��� 3���� ��� 1���� �ʿ��մϴ�.
	�׷��� Ű��� �䳢���� ���̸� �ֱ� ���� ����� ��� ������ ������� k���� ���������� �մϴ�.
	�ֽ��� �ִ��� ���� ������� �����ϴ�. �ֽ��� ������ return �ϼ���. 
*/
#include <stdio.h>
#include <stdlib.h>

void InputINFO(int *, int *, int *);
int solution(int num_apple, int num_carrot, int k) {
	if(num_apple<3 || num_carrot<1)
		return 0;
	else
		return (num_apple+num_carrot-k)/4;
}

void main(void) {
	int num_apple;
	int num_carrot;
	int k;
	InputINFO(&num_apple, &num_carrot, &k);
	printf("Result Solution: %d\n", solution(num_apple, num_carrot, k));
}
void InputINFO(int *apple, int *carrot, int *k) {
	printf("��� ����: ");
	scanf("%d", apple);
	printf("��� ����: ");
	scanf("%d", carrot);
	printf("�䳢���� �� ���� ����: ");
	scanf("%d", k);
}
