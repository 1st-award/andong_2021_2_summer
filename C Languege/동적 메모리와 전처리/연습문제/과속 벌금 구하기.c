/*
	��� �ӵ����� ������ �� ������ �� � ������ �˾Ƴ��� �մϴ�. ������ �ű�� ������ ������ �����ϴ�.
	=====
	���� �ӵ� 10% �̻� 20% �̸� ���� -> 3�� ��
	���� �ӵ� 20% �̻� 30% �̸� ���� -> 5�� ��
	���� �ӵ� 30% �̻� ����			 -> 7�� ��
	=====
	�� ������ ������ ���ϼ���.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int *, int *, int *);
int solution(int speed, int *cars, int cars_len) {
	int i, pay = 0;
	for(i=0; i<cars_len; ++i) {
		// ���� �ӵ� 10% �̻� 20% �̸� ���� -> 3�� ��
		if(cars[i] >= (int)(speed*1.1) && cars[i] < speed*1.2) // 110���� true�� �ȳ����� ������ �� ��ȯ���� �ذ� 
			pay+=3;
		// ���� �ӵ� 20% �̻� 30% �̸� ���� -> 5�� ��
		else if(cars[i] >= speed*1.2 && cars[i] < speed*1.3)
			pay+=5;
		// ���� �ӵ� 30% �̻� ����			 -> 7�� ��
		else if(cars[i] >= speed*1.3) 
			pay+=7;
	}
	return pay;
} 

void main(void) {
	int speed;
	// cars_len 1~40
	int *cars = (int*)malloc(sizeof(int)*40);
	int cars_len;
	SetINFO(&speed, cars, &cars_len);
	printf("Result Solution: %d\n", solution(speed, cars, cars_len));
}
void SetINFO(int *speed, int *cars, int *cars_len) {
	int num, i;
	// ���� �ӵ��� 30~140, 10���� ������ �������� ����. 
	puts("====���� �ӵ� �Է�====");
	scanf("%d", &num);
	if(num<30 || num>140 || !num%10)
		exit(1);
	else
		*speed = num;
	puts("====�ڵ��� �ӵ� �Է�====");
	for(i=0; i<40; ++i) {
		scanf("%d", &num);
		if(num==-1)
			break;
		// ��� ���� 0~200 
		else if(num<0 || num>200)
			exit(1);
		else
			cars[i] = num;
	}
	*cars_len = i;
}
