/*
	����: Ű����κ��� ���� ���ڵ带 �� �� �Է¹޾� �ʵ带
	�����Ͽ� ����ü �迭�� ������ �� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
	(�ǹ�: ��� ����� ����?)
	���ڵ� ����: �̸� | �й� | �а� | �г�(����)
	�Է� ���� ����: "exit" �Է�
*/
#include <stdio.h>

typedef struct Student {
	char name[24];
	char id[16];
	char major[32];
	int year;
}st;

// typedef struct Student student;

//�Լ� ���� ����

char Answer(void);
void Whilebreak(void);
int aaa();

int main()
{
	char answer[64];
	char* a = answer;
	char* p = NULL;

	printf("�Է¹��� ���ڵ�( | �� ����): ");
	scanf("%s", a);

	p = strtok(*a, | );

	while (1)
	{

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





