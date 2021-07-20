#include <stdio.h>

int sumary(int *_ary, int SIZE);
void main(void) {
	int i, sum = 0;
	int point[] = {95, 88, 76, 54, 85 ,33, 65, 78, 99, 82};
	int *address = point;
	int aryLength = sizeof(point) / sizeof(int);
	
	for(i=0; i<aryLength; ++i) {
		sum+=*(point+i);
	}
	
	printf("메인에서 구한 합은%d\n", sum);
	address = point;
	printf("함수sumary() 호출로 구한 합은 %d\n", sumary(point, aryLength));
	printf("함수sumary() 호출로 구한 합은 %d\n", sumary(&point[0], aryLength));
	printf("함수sumary() 호출로 구한 합은 %d\n", sumary(address, aryLength));
}

int sumary(int *_ary, int SIZE) {
	int sum = 0, i = 0;
	for(i=0; i<SIZE; ++i) {
		sum+= *_ary++;
	}
	return sum;
}
