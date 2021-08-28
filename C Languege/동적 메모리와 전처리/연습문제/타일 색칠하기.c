/*
	타일을 'R', 'G', 'B' 색으로 칠하려 합니다. R 색으로는 3칸을 한 번에, G 색으로는 2칸을 한 번에,
	B 색으로는 1칸을 칠할 수 있습니다. 색은 R, G, B 순서로 한 번씩 번갈아 갈면서 사용해야 하며, 
	타일의 길이를 넘겨서 칠할 수 없습니다. 
	순서에 맞게 칠할 수 있으면 칠한 문자열을, 하지 못하면 -1을 return 하세요. 
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
	printf("길이 입력: ");
	scanf("%d", tile_length);
	if(*tile_length<0 || *tile_length>1000)
		exit(1);
}

