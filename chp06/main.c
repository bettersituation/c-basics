/*
printf: �ڵ� �థ�� X / ���� ��� O
puts: �ڵ� �థ�� O / ���� ��� X

������
1) ���� �ֱ� ����� �������� �켱 ������ ����
2) �������� ������ �ش� ������ �ȿ��� ����� ������ �����

goto
- ��� ����!!

*/

#include <stdio.h>

int main(void) {
	int c;

	int age;
	printf("���̸� �Է��ϼ���: ");
	scanf_s("%d", &age);

	while ((c = getchar()) != '\n' && c != EOF);

	if (age >= 20) {
		printf("����� ���̴� %d�Դϴ�.\n", age);
	}
	else if (age >= 10) {
		printf("�����. %d���̿�.\n", age);
	}
	else {
		printf("������ ��� %d���.\n", age);
	}

	char s[] = "������0";
	if (1) {
		char s[] = "������1";
		printf("%s\n", s);
		if (1) {
			char s[] = "������2";
			printf("%s\n", s);
			if (1) {
				printf("%s\n", s);
			}
		}
	}
	printf("%s\n", s);

	char z;
	printf("z�� �Է��ϼ���: ");
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