/*
	������������ ���ĵǾ��ִ� �� �迭 arrA, arrB�� �ϳ��� �迭�� ��ġ�� �մϴ�.
	��, ��ģ ���� �迭�� ������������ ���ĵǾ� �־�� �մϴ�.
	��ģ ���� �迭�� �������� �� return �ϼ���. 
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int*, int*, int*, int*);
int* solution(int arrA[], int arrA_len, int arrB[], int arrB_len) {
	// ���ο� �迭 �ʱ�ȭ 
	int *arrC = (int*)calloc(arrA_len + arrB_len, sizeof(int));
	// �迭 A -> �迭 C 
	int i;
	for(i=0; i<arrA_len; ++i) 
		arrC[i] = arrA[i];
	// �迭 B -> �迭 C
	int j;
	for(j=0; j<arrB_len; ++j, ++i)
		arrC[i] = arrB[j];
	// �������� ����
	for(i=0; i<arrA_len+arrB_len; ++i) {
		for(j=i; j<arrA_len+arrB_len; ++j) {
			if(arrC[i] > arrC[j]) {
				arrC[i] = arrC[i] ^ arrC[j];
				arrC[j] = arrC[i] ^ arrC[j];
				arrC[i] = arrC[j] ^ arrC[i];
			}
		}
	} 
	return arrC; 
} 
void main(void) {
	// arrA_len 1 ~ 200,000
	int *arrA = (int*)calloc(200000, sizeof(int));
	int arrA_len;
	// arrB_len 1 ~ 200,000
	int *arrB = (int*)calloc(200000, sizeof(int));;
	int arrB_len;
	SetINFO(arrA, &arrA_len, arrB, &arrB_len);
	int *ret = solution(arrA, arrA_len, arrB, arrB_len);
	int i;
	printf("Result Solution: ");
	for(i=0; i<arrA_len+arrB_len; ++i)
		printf("%d, ", ret[i]);		
}

void SetINFO(int *arrA, int *arrA_len, int *arrB, int *arrB_len) {
	int i, num;
	puts("====A �迭 �Է�====");
	// arrA_len 1 ~ 200,000
	for(i=0; i<200000; ++i) {
		scanf("%d", &num);
		if(num == -1)
			break;
		// arrA�� ���Ҵ� -1,000,000 ~ 1,000,000
		else if(num<-1000000 || num>1000000)
			exit(1);
		else
			arrA[i] = num; 
	}
	*arrA_len = i;
	puts("====B �迭 �Է�====");
	// arrB_len 1 ~ 200,000
	for(i=0; i<200000; ++i) {
		scanf("%d", &num);
		if(num == -1)
			break;
		// arrA�� ���Ҵ� -1,000,000 ~ 1,000,000
		else if(num<-1000000 || num>1000000)
			exit(1);
		else
			arrB[i] = num; 
	}
	*arrB_len = i;
}
