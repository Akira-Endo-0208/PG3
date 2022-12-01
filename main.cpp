#include <stdio.h>
#include <stdlib.h>
#include <string.h>



typedef struct cell
{
	int val;
	struct cell* next;
}CELL;



void create(CELL* endCell, int val);
void index(CELL* endCell);

int main() {
	int val;

	CELL head;
	head.next = nullptr;

	while (true)
	{

		printf("\n好きな数字を入力してください\n");
		printf("入力する値:");
		scanf_s("%d", &val);

		//最後尾にセルを追加
		create(&head, val);

		printf("一覧\n");
		//リスト一覧の表示
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
	printf("\n入力された値一覧:");

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