/*
	체스에서 나이트는 한 칸 전진(옆으로도 가능) 후 대각선으로 한 칸 이동이 가능하므로 총 8방향 중 한곳으로 이동이 가능합니다.
	나이트의 위치가 주어지면 이동 가능한 방향의 수를 구하세요.
*/ 
#include <stdio.h>
#include <stdlib.h>

void SetINFO(char*);
int solution(char pos[]) {
	char pos_x = pos[0];
	char pos_y = pos[1];
	int i, count = 0;
	// 나이트가 이동하는 좌표 
	int arr[][2] = {{-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}};
	// 예외처리 시작 
	for(i=0; i<8; ++i) {
		// 이동하는 좌표 x, y 더하기 
		pos_x += arr[i][0];
		pos_y += arr[i][1];
		// 범위에서 벗어나지 않으면 count 
		if(!(pos_x<'A' || pos_x>'H' || pos_y<'1' || pos_y>'8'))
			count++;
		// 원래 값으로 초기화 
		pos_x = pos[0];
		pos_y = pos[1];
	}
	// 총 이동거리 return 
	return count;
}

void main(void) {
	char str[2];
	SetINFO(str);
	printf("Result Solution: %d\n", solution(str));
} 
void SetINFO(char *str) {
	scanf("%s", str);
	// 체스 좌표 예외처리 
	if(str[0]<'A' || str[0]>'H' || str[1]<'1' || str[1]>'8')
		exit(1);
}
