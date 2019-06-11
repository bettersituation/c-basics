#include <stdio.h>

void printArr(int arr[], int size) {
	for (int i = 0; i < size; ++i) {
		printf("%d ", arr[i]);
	}
	putchar('\n');
}

void printStr(char s[], int size) {
	for (int i = 0; i < size; ++i) {
		printf("%d\t%c\n", i, s[i]);
		if (s[i] == '\0') {
			printf("nn\n");
		}
	}
}

void printArr2d(int arr[][4], int d1, int d2) {
	for (int i = 0; i < d1; ++i) {
		for (int j = 0; j < d2; ++j) {
			printf("%d ", arr[i][j]);
		}
		putchar('\n');
	}
}

int main(void) {
	int arr[5] = { 0 };
	int size = sizeof(arr) / sizeof(arr[0]);

	arr[0] = 10;
	printArr(arr, size);

	char s[8] = { "Hello" };
	int Csize = sizeof(s) / sizeof(s[0]);

	printStr(s, Csize);

	int arr2d[3][4] = {
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 }
	};

	int d1 = sizeof(arr2d) / sizeof(arr2d[0]);
	int d2 = sizeof(arr2d[0]) / sizeof(arr2d[0][0]);

	printArr2d(arr2d, d1, d2);
	return 0;
}