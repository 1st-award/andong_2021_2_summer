// ���� ��� ����� ���� �� ������ �����Ͻÿ�.

#include <stdio.h>

void main(void) {
	char *str = "ABCDEF";
	char arr[] = "ABCDEF";
	
	printf("%d %d\n", sizeof(str), sizeof(arr));	// 8 7	str = ������ = �ּ� 32bit = 4byte, 64bit = 8byte, arr = �迭 = ABCDEF\0 = 7byte 
	printf("%c %c\n", str[0], arr[0]);				// A A	���� �� �� ���ʿ� �ִ� ���� ��� 
	printf("%c %c\n", *str, *arr);					// A A	str[0] = *str, arr[0] = *arr 
} 
