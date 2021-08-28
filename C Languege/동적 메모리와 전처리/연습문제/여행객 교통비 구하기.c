/*
	���ఴ���� �� ����� ����Ϸ��� �մϴ�. �������� "Bus", "Ship", "Airplane" �� 3�����Դϴ�.
	���̰� 20�� �̻��̸� � �����, �׷��� ������ ��� ����� �޽��ϴ�.
	���ఴ���� 10�� �̻��� ��� ���ɿ� ���� ������ �޽��ϴ�. �� ����� return �ϼ���.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void InputINFO(int *, int *, char *);
int solution(int *member_age, int member_age_len, char *transportation) {
	int i, audult_sum = 0, child_sum = 0;
	for(i=0; i<member_age_len; ++i) {
		// �������� �����϶� 
		if(strcmp(transportation, "Bus") == 0) {
			//� 
			if(member_age[i] >= 20)
				audult_sum+=40000;
			// ��� 
			else
				child_sum+=15000; 
		}
		// �������� ���϶� 
		else if(strcmp(transportation, "Ship") == 0) {
			// �
			if(member_age[i] >= 20)
				audult_sum+=30000; 
			// ��� 
			else
				child_sum+=13000; 
		}
		// �������� ������϶� 
		else if(strcmp(transportation, "Airplane") == 0) {
			// �
			if(member_age[i] >= 20)
				audult_sum+=70000;
			// ��� 
			else
				child_sum+=45000; 
		}
	}
	// ���ఴ�� 10�� �̻��� �� ����
	if(member_age_len >= 10) {
		// � 10% ���� 
		audult_sum *= 0.9;
		// ��� 20% ����
		child_sum *= 0.8; 
	} 
	return audult_sum + child_sum;
}

void main(void) {
	// member_age_len�� 1~100 
	int *member_age = (int*)calloc(100, sizeof(int));
	int member_age_len;
	char *transportation = (char*)calloc(10, sizeof(int));
	InputINFO(member_age, &member_age_len, transportation);
	printf("Solution Result: %d", solution(member_age, member_age_len, transportation));
}
void InputINFO(int *member_age, int *member_age_len, char *transportation) {
	int i, num;
	puts("���ఴ ���� �Է�");
	for(i=0;i<100;++i) {
		scanf("%d", &num);
		if(num == -1)
			break;
		else if(num<0 || num>1000)
			exit(1);
		else
			member_age[i] = num;
	}
	if(i<0 || i==100)
		exit(1);
	*member_age_len = i;
	puts("��ۼ��� �Է�");
	scanf("%s", transportation); 
}
