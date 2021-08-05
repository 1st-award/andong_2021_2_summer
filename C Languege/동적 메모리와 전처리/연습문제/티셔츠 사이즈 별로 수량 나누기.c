/*	
	A �б������� ��ü Ƽ������ �ֹ��ϱ� ���� �л����� ���ϴ� Ƽ���� ����� �����߽��ϴ�.
	������ �� �ִ� Ƽ���� ������� ���� ������� "XS", "S", "M", "L", "XL", "XXL" �� 6������ �ֽ��ϴ�.
	�л����� ���ϴ� Ƽ���� ����� ������ ����� ����ִ� �迭 shirt-size�� shirt_size�� ���� shirt_size_len��
	�Ű� ������ �־��� ��, ������ ���� Ƽ������ �� ���� �ʿ����� ���� ���� ��������� ������� �迭�� ��� 
	return �ϵ��� solution �Լ��� �ϼ����ּ���. 
*/
#include <stdio.h>
#include <stdlib.h>

void SetShirtSizeLength(int *);
void SetShirtSizeCount(char **, int *, int *);

void main(void) {
	char *shirt_size[] = {"XS", "S", "M", "L", "XL", "XXL"};
	int *shirt_size_len = (int*)malloc(sizeof(int));
	int *shirt_size_count = (int*)calloc(6, sizeof(int));
	int i;
	SetShirtSizeLength(shirt_size_count);
	SetShirtSizeCount(shirt_size, shirt_size_len, shirt_size_count);
	
	printf("[");
	for(i=0; i<6; ++i) {
		printf("%d, ", *(shirt_size_count+i));
	}
	printf("]");
}

void SetShirtSizeLength(int *_getLength) {
	printf("Ƽ������ �� ���� �Է�: ");
	scanf("%d", _getLength); 
}
void SetShirtSizeCount(char **_getSize, int *_getLength, int *_getCount) {
	int i, sum = 0;
	for(i=0; i<6; ++i) {
		printf("%3s�� ���� ������ �Է��ϼ���. >> ", *(_getSize+i));
		scanf("%d", _getCount+i);
		sum += *(_getCount+i);
		if(*_getLength < sum) {
			printf("�� ���� �ʰ�");
			exit(1);
		}
		else if(*_getLength == sum) {
			break;
		}
	}
}
