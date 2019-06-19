/*
chp14 - Part1. FILE �� stdin/out char* �����
*/

#include <stdio.h>

void main(void) {
	FILE* fp = NULL;
	fopen_s(&fp, "Test.txt", "w");
	if (fp == NULL) {
		puts("ERROR: failed to open file");
		return;
	}
	fprintf_s(fp, "%s", "ggg ������\nqqq ������");
	fclose(fp);

	char str[100];

	fopen_s(&fp, "Test.txt", "r");
	if (fp == NULL) {
		puts("ERROR: failed to open file");
		return;
	}
	fscanf_s(fp, "%s", str, sizeof(char) * 100);
	puts(str);
	fclose(fp);

	fopen_s(&fp, "Test.txt", "r");
	if (fp == NULL) {
		puts("ERROR: failed to open file");
		return;
	}
	fgets(str, 2, fp);
	puts(str);
	fgets(str, 20, fp);
	puts(str);
	fgets(str, 20, fp);
	puts(str);
	fclose(fp);

	fp = stdin;
	printf("getchar() - %c\n", getchar());
	fscanf_s(fp, "%s", str, sizeof(char) * 100);
	
	printf("%s", str);
}