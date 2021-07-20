#include <stdio.h>

void main(void) {
	int i;
	char *temp[3];
	char **imsipp;
	imsipp = temp;
	temp[0] = "Archie";
	temp[1] = "man";
	temp[2] = "beautiful";
	
	
	for(i=0; i<3; i++)
		puts(temp[i]);
	
	for(i=0; i<3; i++)
		puts(*imsipp++);
}
