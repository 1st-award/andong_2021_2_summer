// 나이트의 이동 가능한 방향의 수 정답
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int solution(char* pos) {
	int dx[] = {1, 1, -1, -1, 2, 2, -2, -2};
	int dy[] = {2, -2, -2, 2, 1, -1, -1, 1};
	int cx = pos[0] - 'A';
	int cy = pos[1] - '0' -1;
	int ans = 0;
	int i;
	for(i=0; i<8; ++i) {
		int nx = cx + dx[i];
		int ny = cy + dy[i];
		if(nx>=0 && nx<8 && ny>=0 && ny<8)
			ans++;
	}
	return ans;
}

void main(void) {
	char* pos= "A7";
	printf("Result Sultion: %d\n", solution(pos)); 
}
