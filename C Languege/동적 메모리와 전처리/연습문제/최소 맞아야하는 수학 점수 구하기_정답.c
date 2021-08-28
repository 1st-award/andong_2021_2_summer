// 최소 맞아야하는 수학 점수 구하기 정답
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int korean, int english) {
	int answer = 0;
	int math = 210 - (korean + english);
	if(math > 100)
		answer = -1;
	else
		answer = math;
	return answer;
}
void main(void) {
	int korean = 70;
	int english = 60;
	int ret = solution(korean, english);
	printf("Result Solution: %d\n", ret);
}
 
