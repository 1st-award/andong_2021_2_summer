#include <stdio.h>

void main(void) {
	void join(char **);
	int i;
	char *temp[3];
	
	temp[0] = "archie";
	temp[1] = "man";
	temp[2] = "beautiful";
	
	join(temp);
}

void join(char **imsipp) {
	int i;
	for(i=0; i<3; ++i) {
		printf("%s ", imsipp[i]);
	}
	puts("");
	for(i=0; i<3; ++i) {
		printf("%s ", *imsipp++);
	}
}
