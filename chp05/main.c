#include <stdio.h>

/*
sizeof
sizeof - ������ �� ����, ��Ÿ�� �� ����X
sizeof ���� ������� �������� ����

== ����
���� �� 1, �ٸ� �� 0

�׷��� True �� 0 �� �ƴ� ��� ��

�ε��Ҽ��� �����ڷ�
http://freshsources.com/page1/page9/page9.html

||(OR) / &&(AND) ����
: ���ǹ��� ù ��° ���� ���Ͽ� �켱������ �ɷ���
: �� ù ��° ���� �� �� �������̸� ����
- ��Ʈ��Ŷ(short circuit)�̶� ǥ��

ERRORABLE COMPARISON
3 < 1 < 20 = (3 < 1) < 20 = 0 < 20 = 1
3 < 4 < 20 = (3 < 4) < 20 = 1 < 20 = 1

����
!5 = 0
!!5 = !0 = 1

���� ������
���ǽ� ? True procedure : False procedure

�ִ� ���ϱ�
1) ��ʸ�Ʈ ���: ��� ���� �Է¹��� �� ��
2) �����̹� ���: ���� �ϳ��� �Է¹��� �� ��
*/

int main(void) {
	printf("%d\n", sizeof(4));
	printf("%d\n", sizeof(4 + 1.0));

	int x = 0;
	printf("%d\n", x);
	sizeof(++x);
	printf("%d\n", x);

	printf("%d\n", 2 == 2);
	printf("%d\n", 1 != 1);

	printf("%d\n", 3 == 2.9999999F);
	printf("%d\n", 3 != 2.9999999F);
	printf("%d\n", 3 == 3.0000001F);
	printf("%d\n", 3 != 3.0000001F);

	printf("%d\n", 3 < 1 < 20);
	printf("%d\n", 3 < 4 < 20);

	printf("%d\n", !5);
	printf("%d\n", !!5);

	int input;
	int n;
	printf("10 ���ϴ� 10, �ʰ��� 20: ");
	scanf_s("%d", &input);
	// n = input <= 10 ? 10 : 20;
	input <= 10 ? (n = 10) : (n = 20);
	printf("%d\n", n);

	int a, b, c, M;
	printf("�ִ� ���ϱ� - 3�ڸ� �Է�: ");
	scanf_s("%d %d %d", &a, &b, &c);
	
	M = b > a ? b : a;
	M = M > c ? M : c;
	printf("%d\n", M);

	int t, m;
	printf("�ִ밪 ���ϱ� - 3�� �Է� (1): ");
	scanf_s("%d", &t);
	m = t;

	printf("�ִ밪 ���ϱ� - 3�� �Է� (2): ");
	scanf_s("%d", &t);
	m = t > m ? t : m;

	printf("�ִ밪 ���ϱ� - 3�� �Է� (2): ");
	scanf_s("%d", &t);
	m = t > m ? t : m;

	printf("%d", m);

	return 0;
}