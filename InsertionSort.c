#include <stdio.h>

void insertionSort(int arr[], int n) {
	int i, j, tmp;
	for (i = 1; i < n; i++) {
		tmp = arr[i];
		for (j = i - 1; j >= 0 && arr[j] > tmp; j--)
			arr[j + 1] = arr[j];	// �迭�� ���� ���� �ڷ� �̵�
		arr[j + 1] = tmp;
	}
}