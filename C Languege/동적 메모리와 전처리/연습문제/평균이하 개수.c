/*
	평균은 자료의 합을 자료의 개수로 나눈 값을 의미합니다.
	자연수가 들어있는 배열의 평균의 평균을 구하고,
	평균 이하인 숫자는 몇 개 있는지 구하려합니다.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void SetArray(int *, int *);
double CalcMean(int *, int);
int BelowMean(int *, int, double);
void main(void) {
	int *numArr = (int*)calloc(1000, sizeof(int));
	int arrLength;
	SetArray(numArr, &arrLength);
	printf("Result >> %d\n", BelowMean(numArr, arrLength, CalcMean(numArr, arrLength)));
}

void SetArray(int *_setArr, int *_setLen) {
	int i, num;
	for(i=0; ; ++i) {
		scanf("%d", &num);
		if(num == -1) {
			*_setLen = i;
			break;
		}
		else
			_setArr[i] = num;
	}
}
double CalcMean(int *_getArr, int _getLen) {
	int sum = 0, i;
	for(i=0; i<_getLen; ++i) {
		sum+=_getArr[i];
	}
	return (double)sum/_getLen;
}
int BelowMean(int *_getArr, int _getLen, double _getMean) {
	int count = 0, i;
	for(i=0; i<_getLen; ++i) {
		if(_getArr[i] < _getMean)
			++count;
	} 
	return count;
}
