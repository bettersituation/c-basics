# include <stdio.h>
# include <limits.h>

void printArr(int arr[], int size) {
	for (int i = 0; i < size; ++i) {
		printf("%d ", arr[i]);
	}
	puts("");
}

void swap(int arr[], int i, int j) {
	if (i == j) {
		return;
	}
	int tmp = arr[i];
	arr[i] = arr[j];
	arr[j] = tmp;
}

void selectionSort(int arr[], int size) {
	int min_idx;
	int min_v;
	
	if (size <= 1) {
		return;
	}
	for (int i = 0; i < size - 1; ++i) {
		min_idx = i;
		min_v = arr[i];

		for (int j = i + 1; j < size; ++j) {
			if (arr[j] < min_v) {
				min_idx = j;
				min_v = arr[j];
			}
		}
		swap(arr, i, min_idx);
	}
}

void bubbleSelectionSort(int arr[], int size) {
	if (size <= 1) {
		return;
	}
	for (int i = 0; i < size - 1; ++i) {
		for (int j = i + 1; j < size; ++j) {
			if (arr[j] < arr[i]) {
				swap(arr, i, j);
			}
		}
	}
}

void bubbleSort(int arr[], int size) {
	if (size <= 1) {
		return;
	}
	int switch_flag;
	int i;

	while (1) {
		switch_flag = 0;

		for (i = 0; i < size - 1; ++i) {
			if (arr[i + 1] < arr[i]) {
				swap(arr, i + 1, i);
				switch_flag = 1;
			}
		}

		if (!switch_flag) {
			break;
		}
	}
}



int main(void) {
	int arr[5] = { 3, 4, 1, 2, 5 };
	int size = sizeof(arr) / sizeof(arr[0]);

	printArr(arr, size);

//	selectionSort(arr, size);
//	bubbleSelectionSort(arr, size);
	bubbleSort(arr, size);
	printArr(arr, size);

	int snailArr[5][5] = { 0 };

	int r = 0;
	int c = 0;
	int v = 0;
	int direction = 0;

	while (1) {
		if (snailArr[r][c] != 0) {
			break;
		}
		++v;
		snailArr[r][c] = v;
		
		if (direction == 0) {
			if (c == 4 || snailArr[r][c + 1] != 0) {
				direction = 1;
				++r;
			}
			else {
				++c;
			}
		}
		else if (direction == 1) {
			if (r == 4 || snailArr[r + 1][c] != 0) {
				direction = 2;
				--c;
			}
			else {
				++r;
			}
		}
		else if (direction == 2) {
			if (c == 0 || snailArr[r][c - 1] != 0) {
				direction = 3;
				--r;
			}
			else {
				--c;
			}
		}
		else if (direction == 3) {
			if (r == 0 || snailArr[r - 1][c] != 0) {
				direction = 0;
				++c;
			}
			else {
				--r;
			}
		}
	}

	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			printf("%d ", snailArr[i][j]);
		}
		puts("");
	}

	return 0;
}