/*
	����� �ڷ��� ���� �ڷ��� ������ ���� ���� �ǹ��մϴ�.
	�ڿ����� ����ִ� �迭�� ����� ����� ���ϰ�,
	��� ������ ���ڴ� �� �� �ִ��� ���Ϸ��մϴ�.
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
