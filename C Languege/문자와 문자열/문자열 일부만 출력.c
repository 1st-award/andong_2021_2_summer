// "Hong Gil Dong"으로 초기화 한 후 3번부터 6번까지의 문자를 차례로 출력하시오.
#include <stdio.h>

void PrintString(char *);
void main(void) {
	char *str = "Hong Gil Dong";
	PrintString(str);
} 

void PrintString(char *_getStr) {
	int i;
	for(i=3; i<7; ++i) {
		printf("%c", *(_getStr+i));
	}
}
