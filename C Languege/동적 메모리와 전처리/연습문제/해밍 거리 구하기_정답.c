// 해밍거리 구하기 정답
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

char* func_a(char* str, int len) {
	char* padZero = (char*)malloc(sizeof(char)*(len+1));
	int i;
	for(i=0; i<len+1; ++i)
		padZero[i] = 0;
	int padSize = len - strlen(str);
	for(i=0; i<padSize; ++i) 
		padZero[i] = '0';
	strcat(padZero, str);
	return padZero;
} 
int max(int a, int b) {
	return a>b ? a:b;
}
int solution(char* binaryA, char* binaryB) {
	int i;
	int max_length = max(strlen(binaryA), strlen(binaryB));
	if(max_length > strlen(binaryA))
		binaryA = func_a(binaryA, max_length);
	if(max_length > strlen(binaryB))
		binaryB = func_a(binaryB, max_length);
	
	int hamming_distance = 0;
	for(i=0; i<max_length; ++i)
		if(binaryA[i] != binaryB[i])
			hamming_distance += 1;
	return hamming_distance;
}

void main(void) {
	char* binaryA = "10010";
	char* binaryB = "110";
	printf("Result Solution: %d\n", solution(binaryA, binaryB));
}
