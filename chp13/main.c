/*
typedef
#pragma pack(push, n) pack(pop)
비트필드 int/char member : n
*/

#include <stdio.h>
#include <string.h>

#pragma pack(push, 1)
typedef struct User {
	int age;
	char c;
} User;
#pragma pack(pop)

typedef struct TUser {
	int age;
	char c;
} TUser;

typedef struct Bfield {
	unsigned char b1 : 1;
	unsigned char b2 : 4;
	unsigned char b3 : 3;
} Bfield;

typedef union UF {
	char str[3];
	int n;
	float f;
} UF;

int main(void) {
	User a;
	a.age = 4;
	a.c = 'A';
	printf("%d %c", a.age, a.c);
	printf(" size %d", sizeof(a));
	
	TUser b;
	b.age = 4;
	b.c = 'A';
	printf(" size %d", sizeof(b));

	Bfield bf = { 1, 4, 2 };
	printf(" size %d", sizeof(bf));
	puts("");

	UF uf;
	uf.n = -872388226;
	//strcpy_s(uf.str, sizeof(char) * 3, "");
	printf("size %d str %s n %d f %f %x", sizeof(uf), uf.str, uf.n, uf.f, uf.n);

	return 0;
}