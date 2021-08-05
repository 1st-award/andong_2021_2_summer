/*
	A 쇼핑몰에서는 회원 등급에 따라 할인 서비스를 제공합니다.
	회원 등급에 따른 할인율을 다음과 같습니다.
	(S = 실버, G = 골드, V = VIP)
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
	printf("등급과 가격 입력: ");
	scanf("%c %d", _getGrade, _getPrice);
}
void PrintDiscountPrice(char *_getGrade, int *_getPrice) {
	if(*_getGrade == 'S') {
		 printf("%d원의 %d%%는 %.0f원 입니다. %d - %.0f = %.0f 입니다.\n",
		 		*_getPrice, 5, (*_getPrice)*0.05, *_getPrice, (*_getPrice)*0.05, *_getPrice - ((*_getPrice)*0.05));
	}
	else if(*_getGrade == 'G') {
		 printf("%d원의 %d%%는 %.0f원 입니다. %d - %.0f = %.0f 입니다.\n",
		 		*_getPrice, 10, (*_getPrice)*0.1, *_getPrice, (*_getPrice)*0.1, *_getPrice - ((*_getPrice)*0.1));
	}
	else if(*_getGrade == 'V') {
		 printf("%d원의 %d%%는 %.0f원 입니다. %d - %.0f = %.0f 입니다.\n",
		 		*_getPrice, 15, (*_getPrice)*0.15, *_getPrice, (*_getPrice)*0.15, *_getPrice - ((*_getPrice)*0.15));
	}
	else {
		printf("등급이 올바르지 않습니다.");
	}
}

