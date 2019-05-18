#include <stdio.h>

int main(void) {
	int res = 0;
	// 1. 3 + 4 (7 �ӽ� ����)
	// 2. 7 - 5 ����
	res = 3 + 4 - 5;
	printf("%d\n", res);

	// char + int = int (������Ʈ�� �����)
	char ch = 'A';
	printf("%c\n", ch);
	printf("%d\n", sizeof(ch));
	printf("%d\n", sizeof(ch + 1));

	// int + double = double
	// ERROR! printf("%d\n", 5.0 + 2);
	printf("%f\n", 5.0 + 2);

	int n1;
	int n2;
	printf("�� ������ �Է��ϼ���.: ");
	scanf_s("%d %d", &n1, &n2);
	printf("��� %.2f\n", (n1 + n2) / 2.);

	int m1;
	int m2;
	printf("�� ������ �Է��ϼ���.: ");
	scanf_s("%d %d", &m1, &m2);
	printf("��: %d\n", m1 / m2);
	printf("������: %d\n", m1 % m2);

	int t;
	printf("�ʸ� �Է��ϼ���.: ");
	scanf_s("%d", &t);
	printf("%d�ʴ� %02d�ð� %02d�� %02d�� �Դϴ�.\n", t, t / 3600, (t % 3600) / 60, t % 60);

	int x = 0;
	int y = 10;
	
	// x = l-value (left-value or locator)
	x = y;

	int now;
	int acc = 0;
	printf("ù ° ������: ");
	scanf_s("%d", &now);
	acc += now;
	printf("�� ° ������: ");
	scanf_s("%d", &now);
	acc += now;
	printf("�� ° ������: ");
	scanf_s("%d", &now);
	acc += now;

	printf("������: %d\n", acc);

	printf("5 / 2 = %d\n", 5 / 2);
	printf("5. / 2 = %f\n", 5. / 2);
	printf("(double)5 / 2 = %f\n", (double)5 / 2);

	int z = 10;
	printf("z = 10. z++ output %d\n", z++);
	z = 10;
	printf("z = 10. ++z output %d\n", ++z);

	// 0x = 16���� ����
	// format %08X: 1) zero padding of 8 length 2) 16���� �빮��(X) / �ҹ���(x)
	// &(and) |(or) ^(xor) ~(negative) >>(shift right) <<(shift left)
	int d = 0x11223344;
	printf("origin %08X\n", d);
	printf("%08X\n", d & 0x00FFFF00);
	printf("%08X\n", d | 0x00FFFF00);
	printf("%08X\n", d ^ 0x00FFFF00);
	printf("%08X\n", ~d);
	printf("%08X\n", d >> 8);
	printf("%08X\n", d >> 4);
	printf("%08X\n", d << 8);
	printf("%08X\n", d << 4);

	// mask ����
	// ���ϴ� �κ��� �ִ밪(1111) = F
	// ������ �ʴ� �κ� �ּҰ�(0000) = 0
	// ���� �Ͽ� & ���� �����ϴ� Ʈ��

	return 0;
}