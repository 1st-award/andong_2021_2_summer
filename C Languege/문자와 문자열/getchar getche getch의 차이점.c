#include <stdio.h>
#include <conio.h>

void main(void) {
	char ch;
	printf("���ڸ� ��� �Է��ϰ� Enter�� ������ >> \n");
	while((ch=getchar()) != 'q') 
		putchar(ch);
	
	printf("\n���ڸ� ���� ������ �� �� ��� >> \n");
	while((ch=getche()) != 'q')
		putchar(ch);
	
	printf("\n���ڸ� ������ �� �� ��� >> \n");
	while((ch=getch()) != 'q')
		putch(ch);
	puts("");
	return;
}
