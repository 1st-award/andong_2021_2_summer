/*
	어느 누군가가 타임머신을 타고 과거로 가서 숫자 0이 없는 수 체계를 전파했습니다. 역사가 바뀌어 이제 사람들의 의식 속엔
	0이란 숫자가 사라졌습니다. 따라서, 현재의 수 체계는 1, 2, 3, ..., 8, 9, 11, 12, ...와 같이 0이 없게 바뀌었습니다.
	0을 포함하지 않은 자연수 num이 매개변수로 주어질 때, 이 수에 1을 더한 수를 return하도록 solution 함수를 완성해주세요.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SetINFO(int *);
int solution(int num) {
	num += 1;
	char *str = (char*)calloc(18, sizeof(char));
	// 정수 -> 문자열로 변환 
	sprintf(str, "%d", num);
	// 0 -> 1로 변환 
	int i;
	// printf("%s\n", str);
	for(i=0; i<strlen(str); ++i) {
		// printf("%c\n", str[i]);
		if(str[i] == '0')
			str[i] = '1';
	} 
	// 문자열 -> 정수로 변환 
	return atoi(str);
}

void main(void) {
	int num;
	SetINFO(&num);
	printf("Result Solution: %d", solution(num));
}ㄴ 
void SetINFO(int *num) {
	scanf("%d", num);
}
	 
