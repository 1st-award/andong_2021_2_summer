// �迭 �����͸� �̿��Ͽ� ������ �迭�� ��� ���� ����\
 5�� ������Ű�� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
void main(void) {
	int ary[][5] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int (*ptr)[5] = ary;
	int i, j;
	
	for(i=0; i<2; ++i) {
		for(j=0; j<5; ++j) {
			ptr[i][j] += 5;
		}
	}
	
	for(i=0; i<2; ++i) {
		for(j=0; j<5; ++j) {
			printf("%2d ", ary[i][j]);
		}
		puts("");
	}
}
