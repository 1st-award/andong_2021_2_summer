/*
	해밍 거리(Hamming distance)란 같은 길이를 가진 두 개의 문자열에서 같은 위치에 있지만 서로 다른 문자의
	개수를 뜻합니다. 예를 들어 두 2진수 문자열이 "10010"과 "110"이라면, 먼저 두 문자열의 자릿수를 맞추기 위해
	"110"의 앞에 0 두개를 채워 "00110"으로 만들어 줍니다.
	두 2진수 문자열은 첫 번재와 세 번째 문자가 서로 다르므로 해밍 거리는 2 입니다. 해밍 거리를 구하세요.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SetINFO(char*, char*);
int solution(char *binaryA, char *binaryB) {
	return abs(strlen(binaryA) - strlen(binaryB));
}  
void main(void) {
	// 길이는 1 ~ 10 
	char *binaryA = (char*)malloc(sizeof(char)*10);
	char *binaryB = (char*)malloc(sizeof(char)*10);
	SetINFO(binaryA, binaryB);
	printf("Result Solution: %d\n", solution(binaryA, binaryB));
} 
void SetINFO(char *binaryA, char *binaryB) {
	puts("====binaryA 입력====");
	scanf("%s", binaryA);
	puts("====binaryB 입력====");
	scanf("%s", binaryB);
	// 0으로 시작하지 않습니다. 
	if(!binaryA[0] && !binaryB[0]) 
		exit(1);
}
