/*
	XX 마트에선 구매할 물건이 3개 이하이면 소량 계산대에서, 그렇지 않으면 일반 계산대에서 계산해야 합니다.
	두 계산대 모두 물건 한 개를 계산하는 데 1분이 걸립니다.
	모든 물건을 계산하는데 걸리는 시간을 구하세요.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int *, int *);
int solution(int *stuffs, int stuffs_len) {
	int i; 
	int small_counter = 0;
	int nomal_counter = 0;
	for(i=0; i<stuffs_len; ++i) {
		if(stuffs[i]<=3)
			small_counter+=stuffs[i];
		else
			nomal_counter+=stuffs[i];
	}
	return small_counter > nomal_counter ? small_counter : nomal_counter;
} 

void main(void) {
	// stuffs_len 1 ~ 100
	int *stuffs = (int*)malloc(sizeof(int)*100);
	int stuffs_len;
	SetINFO(stuffs, &stuffs_len);
	printf("Result Solution: %d\n", solution(stuffs, stuffs_len));
}
void SetINFO(int *stuffs, int *stuffs_len) {
	int i, num;
	puts("==== 물건 개수 입력====");
	for(i=0; i<100; ++i) {
		scanf("%d", &num);
		if(!num)
			break;
		// 손님이 구입할 물건은 1 ~ 20
		else if(num<1 || num>20)
			exit(1); 
		else
			stuffs[i] = num;
	}
	*stuffs_len = i;
}
