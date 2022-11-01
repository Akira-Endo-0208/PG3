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
			printf("[要素の操作]\n");
			printf("1.要素の一覧表示\n");
			printf("2.最後尾に要素の挿入\n");
			printf("3.最後尾の要素の削除\n");
			printf("\n-------------------\n");
			printf("操作を選択してください\n");
			scanf_s("%d", &operation);
		}
		if (operation == 1)
		{
			printf("[要素の一覧表示]\n");
			index(&head);
			printf("\n-------------------\n");
			printf("0.初期画面に戻る\n");
			scanf_s("%d", &operation);
		}
		if (operation == 2)
		{
			printf("[リスト要素の挿入]\n");
			printf("\n追加する要素の値を入力してください\n");

			scanf_s("%s", str,10);

			create(&head, str);

			printf("要素”%s”がリストの最後尾に挿入されました\n",str);
			printf("\n-------------------\n");
			printf("0.初期画面に戻る\n");
			scanf_s("%d", &operation);

		}
		if (operation == 3)
		{
			deleteCell(&head);
			printf("\n-------------------\n");
			printf("0.初期画面に戻る\n");
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

		printf("要素一覧:{\n");

	while (endCell->next != nullptr) {
		endCell = endCell->next;
		printf("%d:", num);
		printf("”%s”",endCell->str);

		if (endCell->next != nullptr)
		{
			printf(",\n");
		}
		num++;
	}

	printf("\n");
	printf("}\n");

	printf("要素数:%d", num);

}

void deleteCell(CELL* endCell) {


	while (endCell->next != nullptr) {
		endCell = endCell->next;
	}
	endCell = nullptr;
	

}