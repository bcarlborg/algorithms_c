#include <stdio.h>

void insertionSort(int *arr, size_t n) {
	for (int i = 1; i < n; ++i) {
		int curr = arr[i];

		for (int j = i -1; j >= 0; --j) {
			int cmp = arr[j];
			if (curr < cmp) {
				arr[j + 1] = cmp;
				arr[j] = curr;
			} else break;
		}
	}
}

void printArr(int * arr, size_t n) {
	printf("[ ");
	for (int i = 0; i < n - 1; ++i)
		printf("%i, ", arr[i]);
	printf("%i ]", arr[n -1]);
}

