#include <stdio.h>
#include <conio.h>

void main(void) {
	char ch;
	printf("문자를 계속 입력하고 Enter를 누르면 >> \n");
	while((ch=getchar()) != 'q') 
		putchar(ch);
	
	printf("\n문자를 누를 때마다 두 번 출력 >> \n");
	while((ch=getche()) != 'q')
		putchar(ch);
	
	printf("\n문자를 누르면 한 번 출력 >> \n");
	while((ch=getch()) != 'q')
		putch(ch);
	puts("");
	return;
}
