// 티셔츠 사이즈 별로 수량 나누기 답 
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

int *solution(char* shirt_size[], int shirt_size_len) {
	int *size_counter = (int*)malloc(sizeof(int)*6);
	int i;
	for(i=0; i<6; ++i) {
		size_counter[i] = 0;
	}	
	for(i=0; i<shirt_size_len; ++i) {
		if(strcmp(shirt_size[i], "XS") == 0)
			size_counter[0]++;
		else if(strcmp(shirt_size[i], "S") == 0)
			size_counter[1]++;
		else if(strcmp(shirt_size[i], "M") == 0)
			size_counter[2]++;
		else if(strcmp(shirt_size[i], "L") == 0)
			size_counter[3]++;
		else if(strcmp(shirt_size[i], "XL") == 0)
			size_counter[4]++;
		else if(strcmp(shirt_size[i], "XXL") == 0)
			size_counter[5]++;
	}
	return size_counter;
} 

int main() {
	char *shirt_size[] = {"XS", "S", "L", "L", "XL", "S"};
	int shirt_size_len =6, i;
	int *ret = solution(shirt_size, shirt_size_len);
	
	printf("Solution: return value of the function is {");
	for(i=0; i<6; ++i) {
		if(i!=0)	printf(", ");
		printf("%d", ret[i]);
	}
	printf("}\n");
}


