// ������ ���� "�츮���� ���ѹα�!"�� ������ �迭�� �ʱ�ȭ�ϰ�\
���̸� ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
#include <stdio.h>
#include <string.h>

int GetLength(char *);
void PrintLength(int);
void main(void) {
	char *str = "�츮���� ���ѹα�!";
	PrintLength(GetLength(str));
}

int GetLength(char *_getString) {
	return strlen(_getString);
}
void PrintLength(int _getLength) {
	printf("�� ���ڿ��� ���̴� %d�Դϴ�.\n", _getLength); //�ѱ��� 2byte�� �� 18(�ѱ� 8�� ��Ÿ 2��) �ν�
}
