// 타일 색칠하기 정답.
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

char *solution(int length) {
	char *answer = (char*)malloc(sizeof(char)*length+1);
	char *answer1 = "-1";
	char com[6] = {'R', 'R', 'R', 'G', 'G', 'B'};
	int i;
	if(length%6==1 || length%6==2 || length%6==4) return answer1; 
	else {
		for(i=0; i<length; ++i) {
			answer[i] = com[i%6];
		}
		answer[length] = '\0';
	}
	return answer;
}

void main(void) {
	int tile_length1 = 11;
	char *ret1 = solution(tile_length1);
	printf("Result Solution: %s\n", ret1);
	
	int tile_length2 = 16;
	char *ret2 = solution(tile_length2);
	printf("Result Solution: %s\n", ret2);
} 
