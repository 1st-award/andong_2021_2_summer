// �迭���� ��� ������ ���� ��� n�� ������Ű�� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h> 

void increment(int*, int, int);
void main(void) {
	int data[] = {3, 21, 35, 57, 24, 82, 8};
	int n, i;
	
	printf("������ų ���� �Է�: ");
	scanf("%d", &n);
	
	increment(data, 7, n);
	for(i=0; i<7; ++i) {
		printf("%d ", data[i]);
	}
}
void increment(int *_p, int _size, int _n) {
	int i;
	for(i=0; i<_size; ++i) {
		_p[i]+=_n;
	}
}
