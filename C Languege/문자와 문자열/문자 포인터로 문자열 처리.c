#include <stdio.h>

void main(void) {
	int i = 0;
	char *java = "java";
	printf("%s ", java);
	
	while(java[i] != '\0') 
		printf("%c", java[i++]);
	printf(" "); 
	i=0;
	while(*(java+i) != '\0')
		printf("%c", *(java + i++));
	puts("");
	return;
} 
