/*
	A 대학에서는 수준별 영어 강의를 제공하고 있습니다. 초급 영어 강의는 
	토익시험에서 650~800미만의 성적을 취득한 학생만을 수강대상으로 하고 있습니다.
	초급 영어 강의에 수강신청한 사람이 10명일 때, 이 중에서 몇명이 수강 대상에 해당하는지 확인하려합니다. 
*/
#include <stdio.h>
#include <stdlib.h>

void SetArray(int *, int);
int Audience(int *, int);
void main(void) {
	int *scores = (int*)calloc(10, sizeof(int));
	int scores_len = 10;
	SetArray(scores, scores_len);
	printf("총 수강 대상 인원: %d명\n", Audience(scores, scores_len));
}

void SetArray(int *_setArr, int _getLen) {
	int i;
	for(i=0; i<_getLen; ++i) {
		// scores의 원소는 500이상 990 이하의 정수입니다. 
		printf("500~990 자연수를 입력하세요. >> ");
		scanf("%d", _setArr+i);
		if(*(_setArr+i)<500 || *(_setArr+i)>990) {
			puts("범위 오류");
			exit(1); 
		} 
	}
}
int Audience(int *_getArr, int _getLen) {
	int i, count=0;
	for(i=0; i<_getLen; ++i) {
		if(*(_getArr+i)>=650 && *(_getArr+i)<800)
			++count;
	}
	return count;
}
