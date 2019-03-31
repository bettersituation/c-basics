#include <stdio.h>

int main(void) {
	printf("Hello, World!\n");
	return 0;
}

/*
1. #include 전처리기
- #include <stdio.h> 의 의미: stdio.h 를 포함하여 컴파일

2. Scope 와 구문
- Scope({}) 는 여러 구문을 한데 묶는 데에 사용되는 중괄호를 의미함

3. 함수
- 호출자(caller) 와 피호출자(callee)

4. Build
			 *컴파일*                  *링크
HelloWorld.c --------> HelloWorld.obj -------> HelloWorld.exe
*/