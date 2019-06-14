// _getch: 버퍼 저장 X 즉시 반환

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int global_v = 4;

int printMenu(void);

int main(void) {

	int nMenu;
	while ((nMenu = printMenu()) != 0) {
		switch (nMenu) {
		case 1:
			puts("New~");
			break;
		case 2:
			puts("Search~");
			break;
		case 3:
			puts("Print~");
			break;
		case 4:
			puts("Remove~");
			break;
		default:
			puts("Unknown~");
		}
		_getch();
	}
	puts("Bye~");

	printf("global v: %d\n", global_v);
	int global_v = 1;
	printf("global v: %d\n", global_v);

	return 0;
}

int printMenu(void) {
	int nInput;
	system("cls");
	printf("[1]New\t[2]Search\t[3]Print\t[4]Remove\t[0]Exit\n:");
	scanf_s("%d", &nInput);

	return nInput;
}