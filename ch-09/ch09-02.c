/*
	�й�: 202511224
	�̸�: ������
	���α׷� ��:
	��¥: 2025.
	���α׷� ���:

	����: Ű����κ��� ���� ���ڵ带 �� �� �Է¹޾� �ʵ带
	�����Ͽ� ����ü �迭�� ������ �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	(�ǹ�: ��� ����� ����?)
	���ڵ� ����: �̸� | �й� | �а� | �г�(����)
	�Է� ���� ����: "exit" �Է�
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Student {
	char name[24];
	char id[16];
	char major[32];
	int year;
};

typedef struct Student Student;

//�Լ� ���� ����

char Answer(void);
void Whilebreak(void);
int aaa();

int main()
{
	struct Student st1 = { 0 };

	char answer[64];
	char *a = answer;
	char* p = NULL;

	while (1)
	{
		printf("�Է¹��� ���ڵ�( | �� ����): ");
		scanf("%s", a);


		if (a == "exit");
		{
			printf("���α׷��� �����մϴ�.\n");
			break;
		}
 




	}

	return 0;
}

char Answer(void)
{
	char answer[64];
	char* a = answer;

	printf("�Է¹��� ���ڵ�( | �� ����): ");
	scanf("%s", a);


	return *a;
}

// �Է� -> �ʵ� ���� -> ���� -> ���

int Pracitce1()
{
	


	while (1)
	{
		Answer();


		if ( == "exit");


	}



	return 0;
}





