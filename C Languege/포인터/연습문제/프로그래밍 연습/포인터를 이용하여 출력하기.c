// ������ ���� int�� ���� i�� 0x324F3A24�� �����ϰ�, char *���� pc�� �����Ͽ�\
pc������ �̿��Ͽ� i�� ���尪�� 16���� 324F3A24�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

#include <stdio.h>

void main(void) {
	int i = 0x324F3A24;
	char *pc = (char *)&i+1;
	int n;
	
	for(n=3; n>=0; --n) {
		printf("%x", *(pc+n));
	}
} 
