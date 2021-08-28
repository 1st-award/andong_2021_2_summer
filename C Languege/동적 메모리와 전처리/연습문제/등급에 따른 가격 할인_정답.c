// 등급에 따른 가격 할인 정답
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int price, char *grade) {
	int answer = 0;
	if(grade == "S")
		answer = price * 0.95;
	if(grade == "G")
		answer = price * 0.9;
	if(grade == "V")
		answer = price * 0.85;
	return answer;	
}

int main() {
	int pricel = 2500;
	char *gradel = "V";
	int ret1 = solution(pricel, gradel);
	
	printf("Solution: retrun value of the function is %d.\n", ret1);
	
	int price2 = 96900;
	char *grade2 = "S";
	int ret2 = solution(price2, grade2);
	
	printf("Solution: return value of the function is %d.\n", ret2);
}
