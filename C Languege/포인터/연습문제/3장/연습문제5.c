// ���� ��� ����� ���� ������ �����Ͻÿ�.
#include <stdio.h>

void main (void) {
	int arr[2][3] = {{10, 20, 30}, {40, 50, 60}};
	
	printf("%x\n", arr);
	puts("============"); // 62fe00	10
	printf("%x %x %x\n", arr+1, arr[0]+1, arr[1]+1); // 62fe0c 62fe04 62fe10	arr+1 -> ù ��° �迭�� ��, arr[0]+1=&arr[0][1], arr[1]+1=&arr[1][1]
	printf("%x %x %x\n", arr+2, arr[0]+2, arr[1]+2); // 62fe18 62fe08 62fe14	arr+2 -> �� ��° �迭�� ��, arr[0]+2=&arr[0][2], arr[1]+2=&arr[1][2] 
	printf("%x %x %x\n", arr+3, arr[0]+3, arr[1]+3); // 62fe24 62fe0c 62fe18	arr+2 -> �� ��° �迭�� ��, arr[0]+3=&arr[0][3], arr[1]+3=&arr[1][3] 
} 
