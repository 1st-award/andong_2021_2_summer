/*
	������ �±ǵ�, 500m �޸���, ��� ��⸦ �Ϸ� �մϴ�. ���� ���� ���� ����� ������ �����ϴ�.
	=====
	�±ǵ� 		-> 25��� �̻� �¸��ϸ� 250��. �� �ܿ��� �¸��� 8��
	500m �޸��� -> 60�� ���� �� 250��. ������ 1�ʴ� +5�� ������ 1�ʴ� -5��
	���		-> 10�� ����� ���ῡ ���� ������ �ո�ŭ ���� ȹ��. 7�� �̻� 10���� ���߸� �߰� ���� 100�� 
	=====
	������ ȹ���� �� ������ ���ϼ���.
*/
#include <stdio.h>
#include <stdlib.h>

void SetINFO(int *, int *, int *);
int solution(int taekwondo, int running, int *shooting, int shooting_len) {
	int i, point = 0, shooting_bonus_count = 0;
	// �±ǵ� 		-> 25��� �̻� �¸��ϸ� 250��. �� �ܿ��� �¸��� 8��
	point += taekwondo >= 25 ? 250 : taekwondo*8;
	// 500m �޸��� -> 60�� ���� �� 250��. ������ 1�ʴ� +5�� ������ 1�ʴ� -5��
	point += 250 + (60-running)*5;
	// ���		-> 10�� ����� ���ῡ ���� ������ �ո�ŭ ���� ȹ��. 
	for(i=0; i<10; ++i) {
		if(!shooting[i])
			continue;
		// 7�� �̻� 10���� ���߸� �߰� ���� 100��
		else if(shooting[i] == 10) {
			shooting_bonus_count++;	
			point += shooting[i];
		}
		else
			point += shooting[i];
	}
	if(shooting_bonus_count >= 7)
		point += 100;
	return point;
}

void main(void) {
	int taekwondo;
	int running;
	// shooting_len �׻� 10 
	int *shooting = (int*)malloc(sizeof(int)*10);
	int shooting_len = 10;
	SetINFO(&taekwondo, &running, shooting);
	printf("Result Solution: %d\n", solution(taekwondo, running, shooting, shooting_len));
}	
void SetINFO(int *taekwondo, int *running, int *shooting) {
	int num, i;
	puts("====�±ǵ� ���� �Է�====");
	scanf("%d", &num);
	// �±ǵ��� 0 ~ 35
	if(num<0 || num>35)
		exit(1);
	else
		*taekwondo = num;
	puts("====�޸��� ���� �Է�====");
	scanf("%d", &num);
	// �޸��� ����� 40 ~ 120
	if(num<40 || num>120)
		exit(1);
	else
		*running = num;
	puts("====��� ���� �Է�====");
	for(i=0; i<10; ++i) {
		scanf("%d", &num);
		// ���ῡ�� 0 ~ 10 
		if(num<0 || num>10)
			exit(1);
		else
			shooting[i] = num;
	} 
}
