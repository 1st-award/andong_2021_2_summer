#include <stdio.h>

void main(void) {
	register int count;
	for(count=1; count<=100; ++count);
		// scanf("%d", &count);	// ���� ���� �߻� 
		// printf("u ", &count);// register������ �Ϲ� �޸𸮿� �Ҵ�Ǵ°�\
								�ƴϹǷ� &�����ڿ� ������ �߻��Ѵ�. 
		printf("%d\n", count);
}
