/*
chp03. �����
gets, gets_s, fgets, getchar: Ű���� �Է� ���� ���� �� �ش� ���� ���, ���� �� ���ڿ� �Է� �޾� ���ۿ� ����
clear Ű���� ����: 	int c; while ((c = getchar()) != '\n' && c != EOF) {} but ���� Ű���� ���� ���� �� �Է� �䱸
������ ����: fflush(stdin)
������/���н� ����: fpurge(stdin)
*/

#include <stdio.h>
#include <conio.h>

int main(void) {
	char ch;
	char chs[32];
	int d;
	int c;

	ch = getchar();
	putchar(ch);
	printf("\n");

	ch = _getch();
	putchar(ch);
	printf("\n");

	ch = _getche();
	printf("\n");
	putchar(ch);
	printf("\n");

	while ((c = getchar()) != '\n' && c != EOF);
	scanf_s("%d", &d);
	printf("%d\n", d);

	while ((c = getchar()) != '\n' && c != EOF);
	scanf_s("%c", &ch, sizeof(ch));
	printf("%c\n", ch);

	while ((c = getchar()) != '\n' && c != EOF);
	printf("space\n");
	scanf_s("%s$s", chs, sizeof(chs));
	puts(chs);

	while ((c = getchar()) != '\n' && c != EOF);
	fgets(chs, sizeof(chs), stdin);
	puts(chs);

	return 0;
}