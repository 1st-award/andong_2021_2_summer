/* ���ڸ� �Է¹޾� ������������ �����Ͽ� ����ϴ�
  �۾��� �ݺ��ϴٰ� �����ڿ� ���� �̿��� ���ڰ� 
  �ԷµǸ� �����ϴ� ���α׷��� �ۼ��Ͻÿ�. */
#include <stdio.h>
#include <string.h>

void main(void) {
	char c = 'a';
	
	while(1) {
		scanf("%c", &c);
		getchar();
		 
		if(isupper(c)) {
			puts("�빮���Դϴ�.");
		}
		else if(islower(c)) {
			puts("�ҹ����Դϴ�.");
		}
		else {
			puts("����, ���� �̿��� �����Դϴ�."); 
			break; 
		} 
	}
}
