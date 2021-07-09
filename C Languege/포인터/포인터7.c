#include <stdio.h>
#include <string.h>

void main (void) {
	int i;
	char temp[] = "archie";
	char *imsip = temp;
	int temp_size = strlen(temp);
	
	puts("(1)====================");
	for(i=0; i<temp_size; ++i) {
		printf("temp[%d] = %c\n", i, temp[i]);
	}
	
	puts("(2)====================");
	for(i=0; i<temp_size; ++i) {
		printf("*(imsip + %d) = %c\n", i, *(imsip+i));
	}
	
	puts("(3)====================");
	for(i=0; i<temp_size; ++i) {
		printf("imsip[%d] = %c\n", i, imsip[i]);
	}
	
	puts("(4)====================");
	for(i=0; i<temp_size; ++i) {
		printf("%c\n", *imsip++);
	}
} 
