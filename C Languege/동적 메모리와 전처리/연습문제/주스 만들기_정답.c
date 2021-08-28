// 주스 만들기 정답
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int solution(int num_apple, int num_carrot, int k) {
	int answer = 0, i=0;
	if(num_apple < 3 * num_carrot)
		answer = num_apple / 3;
	else
		answer = num_carrot;
	num_apple -= 3 * answer;
	num_carrot -= answer;
	k = k-(num_apple + num_carrot);
	while(k>0) {
		if(!(i%4))	answer--;
		i++;
		k--;
	}
	return answer;
} 

void main(void) {
	int num_apple1 = 5;
	int num_carrot1 = 1;
	int k1 = 2;
	int ret1 = solution(num_apple1, num_carrot1, k1);
	printf("Result Solution: %d\n", ret1);
	
	int num_apple2 = 10;
	int num_carrot2 = 5;
	int k2 = 4;
	int ret2 = solution(num_apple2, num_carrot2, k2);
	printf("Result Solution: %d\n", ret2); 
}
