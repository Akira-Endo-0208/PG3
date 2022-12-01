#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cell {

	int val;
	struct cell* next;

} CELL;

void create(CELL* endCell, int val);
void index(CELL* endCell);

int main() {
	int val;
	CELL head;
	head.next = nullptr;
	while (true)
	{

		printf("\n�D���Ȑ�������͂��Ă�������\n");
		printf("���͂���l:");
		scanf_s("%d", &val);

		create(&head, val);

		index(&head);

	}
	return 0;
}

void create(CELL* endCell, int val) {

	CELL* newCell;

	newCell = (CELL*)malloc(sizeof(CELL));

	newCell->val = val;
	newCell->next = nullptr;

	while (endCell->next != nullptr) {
		endCell = endCell->next;
	}

	endCell->next = newCell;
}

void index(CELL* endCell) {
	printf("\n���͂��ꂽ�l�ꗗ:");

	while (endCell->next != nullptr) {
		endCell = endCell->next;
		printf("%d", endCell->val);

		if (endCell->next != nullptr)
		{
			printf(",");
		}
	}
	printf("\n");
}