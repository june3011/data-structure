#include <stdio.h>

void insertionSort(int arr[], int n) {
	int i, j, tmp;
	for (i = 1; i < n; i++) {
		tmp = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > tmp; j--)
			arr[j + 1] = arr[j];	// 배열의 앞의 값이 뒤로 이동
		arr[j + 1] = tmp;
	}
}