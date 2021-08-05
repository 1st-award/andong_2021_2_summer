#include <stdio.h>

void main(void) {
	char c[] = "C C++ Java";
	char *p;
	int i = 0;
	printf("%s\n", c); 
	c[5] = '\0';
	printf("%s\n%s\n", c, (c+6));
	
	c[5] = ' ';
	p = c;
	while(*p != '\0')
		printf("%c", *p++);
	puts("");
	return;
}
