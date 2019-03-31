/*
chp03. 입출력
gets, gets_s, fgets, getchar: 키보드 입력 버퍼 있을 시 해당 내용 출력, 없을 시 문자열 입력 받아 버퍼에 저장
clear 키보드 버퍼: 	int c; while ((c = getchar()) != '\n' && c != EOF) {} but 만약 키보드 버퍼 없을 시 입력 요구
윈도우 한정: fflush(stdin)
리눅스/유닉스 한정: fpurge(stdin)
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