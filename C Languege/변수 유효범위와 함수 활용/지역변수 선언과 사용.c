#include <stdio.h>

void main(void) {
	int m;
	int n = 10;
	
	printf("%d %d\n", m, n);
	for(m=0; m<3; ++m) {
		// �������� ���� (auto���� ����) 
		auto int sum = 0;
		sum += m;
		printf("%d %d\n", m, sum);
	}
	// printf("%d %d\n", m, sum) // sum ���� �Ұ��� 
} 
