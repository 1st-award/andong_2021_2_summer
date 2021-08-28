/*
	모든 속도위반 차량이 낼 벌금이 총 몇만 원인지 알아내려 합니다. 벌금을 매기는 기준은 다음과 같습니다.
	=====
	규정 속도 10% 이상 20% 미만 위반 -> 3만 원
	규정 속도 20% 이상 30% 미만 위반 -> 5만 원
	규정 속도 30% 이상 위반			 -> 7만 원
	=====
	총 벌금은 얼마인지 구하세요.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int *, int *, int *);
int solution(int speed, int *cars, int cars_len) {
	int i, pay = 0;
	for(i=0; i<cars_len; ++i) {
		// 규정 속도 10% 이상 20% 미만 위반 -> 3만 원
		if(cars[i] >= (int)(speed*1.1) && cars[i] < speed*1.2) // 110에서 true가 안나오는 현상을 형 변환으로 해결 
			pay+=3;
		// 규정 속도 20% 이상 30% 미만 위반 -> 5만 원
		else if(cars[i] >= speed*1.2 && cars[i] < speed*1.3)
			pay+=5;
		// 규정 속도 30% 이상 위반			 -> 7만 원
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
	// 규정 속도는 30~140, 10으로 나누어 떨어지는 숫자. 
	puts("====규정 속도 입력====");
	scanf("%d", &num);
	if(num<30 || num>140 || !num%10)
		exit(1);
	else
		*speed = num;
	puts("====자동차 속도 입력====");
	for(i=0; i<40; ++i) {
		scanf("%d", &num);
		if(num==-1)
			break;
		// 모든 차는 0~200 
		else if(num<0 || num>200)
			exit(1);
		else
			cars[i] = num;
	}
	*cars_len = i;
}
