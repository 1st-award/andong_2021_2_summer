// 과속 벌금 구하기 정답
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int speed, int cars[], int cars_len) {
	int answer = 0;
	int i;
	for(i=0; i<cars_len; ++i) {
		if(cars[i] >= speed * 11/10 && cars[i] < speed * 12/10)
			answer += 3;
		else if(cars[i] >= speed * 12/10 && cars[i] < speed * 13/10)
			answer += 5;
		else if(cars[i] >= speed * 13/10)
			answer += 7;
	}
	return answer;
}

void main(void) {
	int speed = 100;
	int cars[] = {110, 98, 125, 148, 120, 112, 89};
	int cars_len = 7;
	int ret = solution(speed, cars, cars_len);
	printf("Result Soltion: %d\n", ret);
}
