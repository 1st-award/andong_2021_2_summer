/* 
���ڸ� �Է¹޾� ���ĺ� ������ ��쿡�� �׷��� ����ϰ� ������ ���� 
�ƽ�Ű�ڵ尪�� ����ϴ� �۾��� �ݺ��ϴٰ� ��Ÿ�� ���ڰ� �ԷµǸ� 
�����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
#include <stdio.h>
#include <string.h>

void main(void) {
	char c;
	while(1) {
		scanf("%c", &c);
		getchar();
		
		if(isalpha(c)) {
			printf("%c\n", c);
		} 
		else if(isdigit(c)) {
			printf("%d\n", c);
		}
		else {
			break;
		}
	}
} 
