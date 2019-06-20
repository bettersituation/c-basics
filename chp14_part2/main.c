#include <stdio.h>

#pragma pack(push, 1)
typedef struct USER {
	int age;
	char* name;
} USER;
#pragma pack(pop)

void main(void) {
	USER user = { 33, "dsdfwefweftwe3" };
	
	FILE* fp = NULL;
	fopen_s(&fp, "btest", "wb");
	if (fp == NULL)
		return;
	fwrite(&user, sizeof(user), 1, fp);
	fclose(fp);

	printf("USER size: %d\n", sizeof(USER));

	USER user2;

	fopen_s(&fp, "btest", "rb");
	if (fp == NULL)
		return;
	fread(&user2, sizeof(USER), 1, fp);
	fclose(fp);

	printf("%d %s\n", user2.age, user2.name);

	fopen_s(&fp, "btest", "rb");
	printf("ptr at: %d\n", ftell(fp));
	fseek(fp, 0, 0);
	printf("ptr at: %d\n", ftell(fp));
	fseek(fp, 0, SEEK_END);
	printf("ptr at: %d\n", ftell(fp));

}