#include <stdio.h>
#include <Windows.h>
#include <time.h>
typedef void (*PFunc)(int *);

void Result(int *judge) {
	if (*judge == 1)
	{
		printf("���ʂ͓������Ă��܂���");
	}
	else {
		printf("���ʂ͊O��Ă��܂���");
	}
}

void Time(PFunc p,int judge) {

	Sleep(3000);
	printf("���I��...\n");
	p(&judge);
}
int main(void) {

	int choice = 0;
	int dice = 0;
	int result = 0;
	int judge = 0;
	PFunc p;
	p = Result;
	srand(time(NULL));

	printf("�������ł��n�߂܂�\n");
	printf("�o�ڂ����i�����j�ɂȂ邩���i��j�ɂȂ邩�I��ł�������\n");
	printf("��...0 ��...1\n");
	scanf_s("%d",&choice);

	dice = rand() % 6 + 1;
	if (choice >= 2)
	{
		printf("0��1����͂��Ă�������");

		return 0;
	}

	dice = 1;

	if (dice % 2 == 0)
	{
		result = 0;
	}
	else if (dice % 2 == 1)
	{
		result = 1;
	}

	if (result == 0 && choice == 0 || result == 1 && choice == 1)
	{
		judge = 1;
	}
	else
	{
		judge = 0;
	}

	Time(p, judge);



	

	return 0;
}