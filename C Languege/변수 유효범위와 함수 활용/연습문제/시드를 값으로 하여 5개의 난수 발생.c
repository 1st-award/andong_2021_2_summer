// ǥ���Է����� �Էµ� ���� �õ�(seed) ������ �Ͽ� ������ 5�� �߻���Ű�� ���α׷��� �ۼ��Ͻÿ�.
#include <stdio.h>
#include <stdlib.h>

void main(void) {
	int inputSeed, i;
	
	printf("�õ� �Է�: ");
	scanf("%d", &inputSeed);
	srand(inputSeed);
	
	for(i=0; i<5; ++i) {
		printf("%d ", rand());
	}
} 
