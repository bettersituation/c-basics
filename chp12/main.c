/*
���� & ������
�����ڵ� ���ڿ�
*/
#include <stdio.h>
#include <string.h>


int main(void) {
	wchar_t *uni = L"UNICODE~";
	wchar_t uni2[18];

	wcscpy_s(uni2, sizeof(wchar_t) * 9, uni);

	wprintf(L"%s\n", uni);
	wprintf(L"%s", uni2);

	return 0;
}