/*
	달팽이처럼 수가 배치되어있다면 이를 n-소용돌이 수라고 부릅니다.
	n-소용돌이 수의 대각선상에 존재하는 수들의 합을 return해 주세요.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int*);
int in_range(int y, int x, int n) {
	return y<n && x<n && 0<=y && 0<=x;
}
int solution(int n) {
	// 0으로 배열 초기화 
	int (*arr)[n] = (int(*)[n])calloc(n*n, sizeof(int));
	// 주기 별 증가 배열 y x
	int rotate_pos[][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}};
	// 현재, 임시 좌표 초기화 
	int current_y = 0, current_x = 0, temp_y, temp_x;
	// 주기와 카운트 변수 초기화 
	int i, count = 1;
	// current_pos가 범위안에 있고 현재 배열 안에 원소가 0일 때 실행 
	while(in_range(current_y, current_x, n) && !arr[current_y][current_x]) {
		// →, ↓, ←, ↑가 한 주기
		for(i=0; i<4; ++i) {
			//  범위 밖에 있거나 현재 배열 안에 0이 안 들어있을때 break 
			if(!in_range(current_y, current_x, n) || arr[current_y][current_x])	break;
			while(1) {
				arr[current_y][current_x] = count++;
				printf("%d %d %d\n", current_y, current_x, arr[current_y][current_x]);
				// 임시 변수에 다음 위치를 넣어 범위와 원소가 0인지 확인 
				temp_y = current_y + rotate_pos[i][0];
				temp_x = current_x + rotate_pos[i][1];
				// 다음 위치가 범위 밖이거나 원소가 0이 아닐때 다음 rotate_pos를 current에 저장 
				if(!in_range(temp_y, temp_x, n) || arr[temp_y][temp_x]) {
					current_y += rotate_pos[(i+1)%4][0];
					current_x += rotate_pos[(i+1)%4][1];
					break;
				}
				// 범위 안이거나 다음 인덱스에 원소가 0일 때 current <- temp 
				current_y = temp_y;
				current_x = temp_x;
			}
		} 
	} 
	// 대각선 합 구하기 
	int sum = 0;
	for(i=0; i<n; ++i)
		sum+=arr[i][i];
	return sum;
}	

void main(void) {
	int n;
	SetINFO(&n);
	printf("Result Solution: %d\n", solution(n));
} 
void SetINFO(int *n) {
	scanf("%d", n);
	// n은 1 ~ 100 
	if(*n < 1 || *n > 100)
		exit(1);
}
