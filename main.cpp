#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cell {

	char str[10];
	struct cell *next;
	struct cell* prev;
} CELL;

void create(CELL* endCell, const char *buf);
void index(CELL* endCell);
void deleteCell(CELL* endCell);
int main() {
	int operation = 0;
	char str[10];
	CELL head;
	head.next = nullptr;
	head.prev = &head;
	while (true)
	{
		if (operation == 0)
		{
			printf("[�v�f�̑���]\n");
			printf("1.�v�f�̈ꗗ�\��\n");
			printf("2.�Ō���ɗv�f�̑}��\n");
			printf("3.�Ō���̗v�f�̍폜\n");
			printf("\n-------------------\n");
			printf("�����I�����Ă�������\n");
			scanf_s("%d", &operation);
		}
		if (operation == 1)
		{
			printf("[�v�f�̈ꗗ�\��]\n");
			index(&head);
			printf("\n-------------------\n");
			printf("0.������ʂɖ߂�\n");
			scanf_s("%d", &operation);
		}
		if (operation == 2)
		{
			printf("[���X�g�v�f�̑}��]\n");
			printf("\n�ǉ�����v�f�̒l����͂��Ă�������\n");

			scanf_s("%s", str,10);

			create(&head, str);

			printf("�v�f�h%s�h�����X�g�̍Ō���ɑ}������܂���\n",str);
			printf("\n-------------------\n");
			printf("0.������ʂɖ߂�\n");
			scanf_s("%d", &operation);

		}
		if (operation == 3)
		{
			deleteCell(&head);
			printf("\n-------------------\n");
			printf("0.������ʂɖ߂�\n");
			scanf_s("%d", &operation);
		}
	}
	return 0;
}

void create(CELL* endCell, const char * buf) {

	CELL *newCell;

	newCell = (CELL*)malloc(sizeof(CELL));

	strcpy_s(newCell->str, 10, buf);
	newCell->next = nullptr;

	while (endCell ->next != nullptr) {
		endCell = endCell->next;
	}

	endCell->next = newCell;
}

void index(CELL* endCell) {
	int num = 0;

		printf("�v�f�ꗗ:{\n");

	while (endCell->next != nullptr) {
		endCell = endCell->next;
		printf("%d:", num);
		printf("�h%s�h",endCell->str);

		if (endCell->next != nullptr)
		{
			printf(",\n");
		}
		num++;
	}

	printf("\n");
	printf("}\n");

	printf("�v�f��:%d", num);

}

void deleteCell(CELL* endCell) {


	while (endCell->next != nullptr) {
		endCell = endCell->next;
	}
	endCell = nullptr;
	

}