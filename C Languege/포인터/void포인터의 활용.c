#include <stdio.h>

void main(void) {
	int imsi_int = 5;
	float imsi_float = 7.5;
	char imsi_char = 'u';
	
	void *void_p;
	
	void_p = &imsi_int;
	printf("int %d\n", *(int*)void_p);
	
	void_p = &imsi_float;
	printf("float %f\n", *(float*)void_p);
	
	void_p = &imsi_char;
	printf("char %c\n", *(char*)void_p);
}
