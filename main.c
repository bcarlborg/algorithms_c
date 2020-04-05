#include <stdio.h>
#include "./sorting/insertion_sort.h"

int main() {
	int arr[] = { 10, 9, 8, 7, 6, 5, 4, 3, 2, 1 };

	printf("unsorted array: ");
	printArr(arr, 10);
	printf("\n");

	insertionSort(arr, 10);

	printf("sorted array: ");
	printArr(arr, 10);
	printf("\n");
}
