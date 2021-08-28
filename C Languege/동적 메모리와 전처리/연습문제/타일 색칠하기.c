/*
	Ÿ���� 'R', 'G', 'B' ������ ĥ�Ϸ� �մϴ�. R �����δ� 3ĭ�� �� ����, G �����δ� 2ĭ�� �� ����,
	B �����δ� 1ĭ�� ĥ�� �� �ֽ��ϴ�. ���� R, G, B ������ �� ���� ������ ���鼭 ����ؾ� �ϸ�, 
	Ÿ���� ���̸� �Ѱܼ� ĥ�� �� �����ϴ�. 
	������ �°� ĥ�� �� ������ ĥ�� ���ڿ���, ���� ���ϸ� -1�� return �ϼ���. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void InputINFO(int *);
char *solution(int tile_length) {
	char *tile = (char*)calloc(1000, tile_length);
	char *tile_type[] = {"RRR", "GG", "B"};
	int i;
	for(i=0; ;++i) {
		strcat(tile, tile_type[i%3]);
		if(strlen(tile) == tile_length)
			return tile;
		else if(strlen(tile) > tile_length)
			return "-1";
		else
			continue;
	}
}

void main(void) {
	int tile_length;
	InputINFO(&tile_length);
	printf("Solution Return: %s\n", solution(tile_length));
}
void InputINFO(int *tile_length) {
	printf("���� �Է�: ");
	scanf("%d", tile_length);
	if(*tile_length<0 || *tile_length>1000)
		exit(1);
}

