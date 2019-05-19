#include <stdio.h>

/*
sizeof
sizeof - 컴파일 시 수행, 런타임 시 수행X
sizeof 안의 연산식은 수행하지 않음

== 연산
같을 시 1, 다를 시 0

그러나 True 는 0 이 아닌 모든 값

부동소수점 참고자료
http://freshsources.com/page1/page9/page9.html

||(OR) / &&(AND) 연산
: 조건문의 첫 번째 값에 의하여 우선적으로 걸러짐
: 즉 첫 번째 값이 좀 더 포괄적이면 좋음
- 쇼트서킷(short circuit)이라 표현

ERRORABLE COMPARISON
3 < 1 < 20 = (3 < 1) < 20 = 0 < 20 = 1
3 < 4 < 20 = (3 < 4) < 20 = 1 < 20 = 1

부정
!5 = 0
!!5 = !0 = 1

조건 연산자
조건식 ? True procedure : False procedure

최댓값 구하기
1) 토너먼트 방식: 모든 값을 입력받은 후 비교
2) 서바이벌 방식: 값을 하나씩 입력받은 후 비교
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
	printf("10 이하는 10, 초과는 20: ");
	scanf_s("%d", &input);
	// n = input <= 10 ? 10 : 20;
	input <= 10 ? (n = 10) : (n = 20);
	printf("%d\n", n);

	int a, b, c, M;
	printf("최댓값 구하기 - 3자리 입력: ");
	scanf_s("%d %d %d", &a, &b, &c);
	
	M = b > a ? b : a;
	M = M > c ? M : c;
	printf("%d\n", M);

	int t, m;
	printf("최대값 구하기 - 3번 입력 (1): ");
	scanf_s("%d", &t);
	m = t;

	printf("최대값 구하기 - 3번 입력 (2): ");
	scanf_s("%d", &t);
	m = t > m ? t : m;

	printf("최대값 구하기 - 3번 입력 (2): ");
	scanf_s("%d", &t);
	m = t > m ? t : m;

	printf("%d", m);

	return 0;
}