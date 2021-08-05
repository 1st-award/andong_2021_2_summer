/*	
	A 학교에서는 단체 티셔츠를 주문하기 위해 학생별로 원하는 티셔츠 사이즈를 조사했습니다.
	선택할 수 있는 티셔츠 사이즈는 작은 순서대로 "XS", "S", "M", "L", "XL", "XXL" 총 6종류가 있습니다.
	학생별로 원하는 티셔츠 사이즈를 조사한 결과가 들어있는 배열 shirt-size와 shirt_size의 길이 shirt_size_len이
	매개 변수로 주어질 때, 사이즈 별로 티셔츠가 몇 벌씩 필요한지 가장 작은 사이즈부터 순서대로 배열에 담아 
	return 하도록 solution 함수를 완성해주세요. 
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
	printf("티셔츠의 총 개수 입력: ");
	scanf("%d", _getLength); 
}
void SetShirtSizeCount(char **_getSize, int *_getLength, int *_getCount) {
	int i, sum = 0;
	for(i=0; i<6; ++i) {
		printf("%3s의 셔츠 개수를 입력하세요. >> ", *(_getSize+i));
		scanf("%d", _getCount+i);
		sum += *(_getCount+i);
		if(*_getLength < sum) {
			printf("총 개수 초과");
			exit(1);
		}
		else if(*_getLength == sum) {
			break;
		}
	}
}
