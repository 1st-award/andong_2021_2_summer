/*
	A ���θ������� ȸ�� ��޿� ���� ���� ���񽺸� �����մϴ�.
	ȸ�� ��޿� ���� �������� ������ �����ϴ�.
	(S = �ǹ�, G = ���, V = VIP)
	(S = 5%  , G = 10% , V = 15%)
*/
#include <stdio.h>
#include <stdlib.h>

void SetGradeAndPrice(char *, int *);
void PrintDiscountPrice(char *, int *);
void main(void) {
	char *grade = (char*)malloc(sizeof(char));
	int *price = (int*)malloc(sizeof(int));
	SetGradeAndPrice(grade, price);
	PrintDiscountPrice(grade, price);
}

void SetGradeAndPrice(char *_getGrade, int *_getPrice) {
	printf("��ް� ���� �Է�: ");
	scanf("%c %d", _getGrade, _getPrice);
}
void PrintDiscountPrice(char *_getGrade, int *_getPrice) {
	if(*_getGrade == 'S') {
		 printf("%d���� %d%%�� %.0f�� �Դϴ�. %d - %.0f = %.0f �Դϴ�.\n",
		 		*_getPrice, 5, (*_getPrice)*0.05, *_getPrice, (*_getPrice)*0.05, *_getPrice - ((*_getPrice)*0.05));
	}
	else if(*_getGrade == 'G') {
		 printf("%d���� %d%%�� %.0f�� �Դϴ�. %d - %.0f = %.0f �Դϴ�.\n",
		 		*_getPrice, 10, (*_getPrice)*0.1, *_getPrice, (*_getPrice)*0.1, *_getPrice - ((*_getPrice)*0.1));
	}
	else if(*_getGrade == 'V') {
		 printf("%d���� %d%%�� %.0f�� �Դϴ�. %d - %.0f = %.0f �Դϴ�.\n",
		 		*_getPrice, 15, (*_getPrice)*0.15, *_getPrice, (*_getPrice)*0.15, *_getPrice - ((*_getPrice)*0.15));
	}
	else {
		printf("����� �ùٸ��� �ʽ��ϴ�.");
	}
}

