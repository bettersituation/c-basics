#include <stdio.h>

int main(void) {
	printf("Hello, World!\n");
	return 0;
}

/*
1. #include ��ó����
- #include <stdio.h> �� �ǹ�: stdio.h �� �����Ͽ� ������

2. Scope �� ����
- Scope({}) �� ���� ������ �ѵ� ���� ���� ���Ǵ� �߰�ȣ�� �ǹ���

3. �Լ�
- ȣ����(caller) �� ��ȣ����(callee)

4. Build
			 *������*                  *��ũ
HelloWorld.c --------> HelloWorld.obj -------> HelloWorld.exe
*/