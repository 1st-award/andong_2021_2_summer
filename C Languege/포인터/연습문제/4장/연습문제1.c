/*
������ ���� �迭 ��ҵ��� ��µǾ���. ����� ���� []�κп� �ڵ带 �����Ͽ� ���α׷��� �ϼ��Ͻÿ�.
*/ 

#include <stdio.h>

void main(void) {
	int arr[5] = {10, 20, 30, 40, 50};
	// �̰��� �Է��ϼ���. 
	int *ap = arr;
	//
	
	printf("%d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	printf("%d %d %d %d %d\n", ap[0], ap[1], ap[2], ap[3], ap[4]);
}
