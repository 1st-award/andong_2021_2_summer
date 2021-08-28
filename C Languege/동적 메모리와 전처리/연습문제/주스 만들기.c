/*
	주스 1잔을 만들려면 사과 3개와 당근 1개가 필요합니다.
	그런데 키우는 토끼에게 먹이를 주기 위해 사과와 당근 종류에 상관없이 k개를 빼놓으려고 합니다.
	주스는 최대한 많이 만들수록 좋습니다. 주스의 개수를 return 하세요. 
*/
#include <stdio.h>
#include <stdlib.h>

void InputINFO(int *, int *, int *);
int solution(int num_apple, int num_carrot, int k) {
	if(num_apple<3 || num_carrot<1)
		return 0;
	else
		return (num_apple+num_carrot-k)/4;
}

void main(void) {
	int num_apple;
	int num_carrot;
	int k;
	InputINFO(&num_apple, &num_carrot, &k);
	printf("Result Solution: %d\n", solution(num_apple, num_carrot, k));
}
void InputINFO(int *apple, int *carrot, int *k) {
	printf("사과 개수: ");
	scanf("%d", apple);
	printf("당근 개수: ");
	scanf("%d", carrot);
	printf("토끼에게 줄 먹이 개수: ");
	scanf("%d", k);
}
