/*
printf: 자동 행갈이 X / 포맷 사용 O
puts: 자동 행갈이 O / 포맷 사용 X

스코프
1) 가장 최근 선언된 스코프가 우선 순위를 가짐
2) 스코프가 닫히면 해당 스코프 안에서 선언된 변수는 사라짐

goto
- 사용 금지!!

*/

#include <stdio.h>

int main(void) {
	int c;

	int age;
	printf("나이를 입력하세요: ");
	scanf_s("%d", &age);

	while ((c = getchar()) != '\n' && c != EOF);

	if (age >= 20) {
		printf("당신의 나이는 %d입니다.\n", age);
	}
	else if (age >= 10) {
		printf("어리군요. %d살이여.\n", age);
	}
	else {
		printf("더더더 어리네 %d살아.\n", age);
	}

	char s[] = "스코프0";
	if (1) {
		char s[] = "스코프1";
		printf("%s\n", s);
		if (1) {
			char s[] = "스코프2";
			printf("%s\n", s);
			if (1) {
				printf("%s\n", s);
			}
		}
	}
	printf("%s\n", s);

	char z;
	printf("z를 입력하세요: ");
	scanf_s("%c", &z, sizeof(char));
	
	while ((c = getchar()) != '\n' && c != EOF);

	switch (z)	{
		case 'A':
		case 'a':
		case 'B':
		case 'b':
			puts("AaBb");
			break;
		case 'C':
		case 'c':
			puts("Cc");
			break;
		default:
			puts("default");
	}

	char x;
	GOTOG:
		printf("GOTO until input g: ");
		scanf_s("%c", &x, sizeof(char));

		if (x != 'g') {
			goto GOTOG;
		}

	puts("end");
	return 0;
}