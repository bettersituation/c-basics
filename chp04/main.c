#include <stdio.h>

int main(void) {
	int res = 0;
	// 1. 3 + 4 (7 임시 저장)
	// 2. 7 - 5 수행
	res = 3 + 4 - 5;
	printf("%d\n", res);

	// char + int = int (단위비트수 변경됨)
	char ch = 'A';
	printf("%c\n", ch);
	printf("%d\n", sizeof(ch));
	printf("%d\n", sizeof(ch + 1));

	// int + double = double
	// ERROR! printf("%d\n", 5.0 + 2);
	printf("%f\n", 5.0 + 2);

	int n1;
	int n2;
	printf("두 정수를 입력하세요.: ");
	scanf_s("%d %d", &n1, &n2);
	printf("평균 %.2f\n", (n1 + n2) / 2.);

	int m1;
	int m2;
	printf("두 정수를 입력하세요.: ");
	scanf_s("%d %d", &m1, &m2);
	printf("몫: %d\n", m1 / m2);
	printf("나머지: %d\n", m1 % m2);

	int t;
	printf("초를 입력하세요.: ");
	scanf_s("%d", &t);
	printf("%d초는 %02d시간 %02d분 %02d초 입니다.\n", t, t / 3600, (t % 3600) / 60, t % 60);

	int x = 0;
	int y = 10;
	
	// x = l-value (left-value or locator)
	x = y;

	int now;
	int acc = 0;
	printf("첫 째 누적값: ");
	scanf_s("%d", &now);
	acc += now;
	printf("둘 째 누적값: ");
	scanf_s("%d", &now);
	acc += now;
	printf("셋 째 누적값: ");
	scanf_s("%d", &now);
	acc += now;

	printf("누적값: %d\n", acc);

	printf("5 / 2 = %d\n", 5 / 2);
	printf("5. / 2 = %f\n", 5. / 2);
	printf("(double)5 / 2 = %f\n", (double)5 / 2);

	int z = 10;
	printf("z = 10. z++ output %d\n", z++);
	z = 10;
	printf("z = 10. ++z output %d\n", ++z);

	// 0x = 16진수 지정
	// format %08X: 1) zero padding of 8 length 2) 16진수 대문자(X) / 소문자(x)
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

	// mask 연산
	// 원하는 부분은 최대값(1111) = F
	// 원하지 않는 부분 최소값(0000) = 0
	// 으로 하여 & 연산 수행하는 트릭

	return 0;
}