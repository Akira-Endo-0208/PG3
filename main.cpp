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
			printf("[—v‘f‚Ì‘€ì]\n");
			printf("1.—v‘f‚Ìˆê——•\Ž¦\n");
			printf("2.ÅŒã”ö‚É—v‘f‚Ì‘}“ü\n");
			printf("3.ÅŒã”ö‚Ì—v‘f‚Ìíœ\n");
			printf("\n-------------------\n");
			printf("‘€ì‚ð‘I‘ð‚µ‚Ä‚­‚¾‚³‚¢\n");
			scanf_s("%d", &operation);
		}
		if (operation == 1)
		{
			printf("[—v‘f‚Ìˆê——•\Ž¦]\n");
			index(&head);
			printf("\n-------------------\n");
			printf("0.‰Šú‰æ–Ê‚É–ß‚é\n");
			scanf_s("%d", &operation);
		}
		if (operation == 2)
		{
			printf("[ƒŠƒXƒg—v‘f‚Ì‘}“ü]\n");
			printf("\n’Ç‰Á‚·‚é—v‘f‚Ì’l‚ð“ü—Í‚µ‚Ä‚­‚¾‚³‚¢\n");

			scanf_s("%s", str,10);

			create(&head, str);

			printf("—v‘fh%sh‚ªƒŠƒXƒg‚ÌÅŒã”ö‚É‘}“ü‚³‚ê‚Ü‚µ‚½\n",str);
			printf("\n-------------------\n");
			printf("0.‰Šú‰æ–Ê‚É–ß‚é\n");
			scanf_s("%d", &operation);

		}
		if (operation == 3)
		{
			deleteCell(&head);
			printf("\n-------------------\n");
			printf("0.‰Šú‰æ–Ê‚É–ß‚é\n");
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

		printf("—v‘fˆê——:{\n");

	while (endCell->next != nullptr) {
		endCell = endCell->next;
		printf("%d:", num);
		printf("h%sh",endCell->str);

		if (endCell->next != nullptr)
		{
			printf(",\n");
		}
		num++;
	}

	printf("\n");
	printf("}\n");

	printf("—v‘f”:%d", num);

}

void deleteCell(CELL* endCell) {


	while (endCell->next != nullptr) {
		endCell = endCell->next;
	}
	endCell = nullptr;
	

}