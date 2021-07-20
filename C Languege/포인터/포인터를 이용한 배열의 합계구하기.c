#include <stdio.h>

int add(int *data, int length) {
	int i, sum=0;
	for(i=0; i<length; ++i) {
		sum += *data++;
	}
	return sum;
}

void main (void) {
	int temp[2][3] = {{61, 82, 35}, {876, 645, 879}};
	int result;
	
	result = add(temp[0], 3);
	printf("ù ��° ���� �հ�: %d\n", result);
	
	result = add(temp[1], sizeof(temp[1])/sizeof(int));
	printf("�� ��° ���� �հ�: %d\n", result);
	
} 
