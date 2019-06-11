#include <stdio.h>

int main(void) {
	char ch;
	int index = 0;
	while ((ch = getchar()) != '\n' && ch != EOF) {
		printf("%02d\t%c\n", index, ch);
		++index;
	}

	for (int i = 2; i < 10; ++i) {
		for (int j = 1; j < 10; ++j) {
			printf("%d * %d = %d\n", i, j, i * j);
		}
	}

	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 4 - i; ++j) {
			putchar(' ');
		}
		for (int j = 0; j < i + 1; ++j) {
			putchar('*');
		}
		putchar('\n');
	}

	do {
		ch = getchar();
		putchar(ch);
	} while (ch != '\n' && ch != EOF);

	int i;
	for (i = 0; i < 10; ++i) {
		if (i > 4) {
			break;
		}
		printf("%dth\n", i);
	}
	printf("end: %d\n", i);

	for (i = 0; i < 10; ++i) {
		if (i > 4) {
			continue;
		}
		printf("%dth\n", i);
	}
	printf("end: %d", i);

	return 0;
}