/*
	���ڿ��� �Է¹��� �� ������ �Է¹޾� �ش���ġ�� ���ڸ� �����ϰ�
	����ϴ� �۾��� �ݺ��ϴٰ� ���� 1���� ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�. 
	(ù ��° ������ ��ġ�� 1�̸�, 
	���� �Է¹��� ��ȣ�� ���ڿ��� ���� �̻��̸� ������ ���ڸ� �����Ѵ�.) 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *GetString(void);
void RemoveAlpha(char *, int);
void main(void) {
	char *str = GetString();
	int position;
	while(strlen(str)!=1) {
		scanf("%d", &position);
		RemoveAlpha(str, position);
		printf("%s\n", str);
	}
} 

char *GetString(void) {
	char *str = (char*)malloc(sizeof(char)*30);
	scanf("%s", str);
	getchar();
	return str;
}
void RemoveAlpha(char *_getString, int _getPosition) {
	int getLength = strlen(_getString);
	if(getLength<=_getPosition) {
		_getString[getLength-1] = '\0';
		return;
	}
	// printf("%d %s %d\n", getLength, _getString, _getPosition); 
	int i;
	for(i=_getPosition-1; i<getLength-1; ++i) {
		_getString[i] = _getString[i+1];
		_getString[i+1] = '\0';
	}
}
