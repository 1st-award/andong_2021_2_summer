/*
	국어 시험 점수와 영어 시험 점수가 나왔습니다. 
	이때 국어, 영어, 수학, 시험의 평균이 70점 이상이려면 수학 시험 점수가 최소 몇 점 이어야 하는지 알고 싶습니다. 
	최소 수학 점수를 구하세요.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int *, int *);
int solution(int korean, int english) {
	// 평균 구하는 공식 (a+b+c)/3 = 70 -> a+b+c = 210 -> abs(a+b-210) = abs(-c)
	int math = 210-(korean+english);
	// 수학 점수를 100을 받아도 평균 70점이 되지 않는 경우에는 -1을 return 합니다. 
	if(math>100)
		return -1;
	else
		return math; 
} 

void main(void) {
	int korean;
	int english;
	SetINFO(&korean, &english);
	printf("Result Solution: %d\n", solution(korean, english));
}
void SetINFO(int *korean, int *english) {
	puts("====국어 점수 입력====");
	scanf("%d", korean);
	puts("====영어 점수 입력====");
	scanf("%d", english);
	// korean과 english는 0~100
	if(*korean<0 || *english<0 || *korean>100 || *english>100) 
		exit(1);
}
