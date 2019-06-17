#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void TestFunc(void) {
	static int a = 10;
	auto int b = 10;

	printf("a: %d, b: %d\n", a, b);
	++a;
	++b;
}


int main(void) {
	char s1[6] = "Hello";
	char *s2 = s1;
	printf("%s\n%s", s1, s2);
	
	puts("");
	while (*s2 != '\0') {
		putchar(*s2);
		++s2;
	}
	puts("");

	char *s3 = (char*)malloc(sizeof(char) * 6);
	strcpy_s(s3, sizeof(char) * 6, "HiBye");
	printf("%s\n", s3);

	s3 = (char*)realloc(s3, 10);
	printf("%s\n", s3);

	strcpy_s(s3, sizeof(char) * 11, "HelloHiBye");
	printf("%s\n", s3);

	char* strs[3] = { "NEW", "OLD", "BAD" };
	char** strs2 = strs;
	char*** strs_ref = &strs2;

	puts(strs[0]);
	puts(strs[1]);
	puts(strs[2]);

	puts(strs2[0]);
	puts(strs2[1]);
	puts(strs2[2] + 1);

	puts(*(*strs_ref + 1) + 1);

	TestFunc();
	TestFunc();
	TestFunc();
	TestFunc();

	return 0;
}