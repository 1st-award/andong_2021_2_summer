// 사다리타기게임 정답 
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(int ladders[][2], int ladders_len, int win) {
	int answer = 0;
	int player[6] = {1, 2, 3, 4, 5, 6};
	int i, j;
	for(i=0; i<ladders_len; ++i) {
		/*
		for(j=0; j<6; ++j)
			printf("%d ", player[j]);
		puts(""); 
		*/
		// 왼쪽 사다리를 temp에 저장 
		int temp = player[ladders[i][0]-1];
		// 오른쪽 사다리를 왼쪽 사다리에 저장 
		player[ladders[i][0]-1] = player[ladders[i][1]-1];
		// 오른쪽 사다리에 temp 저장 
		player[ladders[i][1-1]] = temp;
	}
	answer = player[win-1];
	return answer;
}

void main(void) {
	int ladders[5][2] = {{1, 2}, {3, 4}, {2, 3}, {4, 5}, {5, 6}};
	int ladders_len = 5;
	int win = 3;
	int ret = solution(ladders, ladders_len, win);
	printf("Result Solution: %d\n", ret);
}
