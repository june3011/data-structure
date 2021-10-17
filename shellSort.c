#include <stdio.h>
// 'Donald L. Shell' �̶�� ����� �����ѹ������,
// ���������� ������ �˰����̴�.
void shellSort(int arr[], int n) {	// n : 11
	int i, j, tmp, gap;
	for (gap = n / 2; gap > 0; gap /= 2) {	// gap = gap / 2
		// if (! ( gap % 2 )) gap++;	// ¦���� Ȧ����
		for (i = gap; i < n; i++) {	// �������� ����
			tmp = arr[i];
			for (j = i; j >= gap && arr[j - gap] > tmp; j -= gap)
				arr[j] = arr[j - gap];
			arr[j] = tmp;
			for (int k = 0; k < n; k++)
				printf("%4d", arr[k]);
			printf("\n");
		}
	}
}

//  11, 9, 15, 12, 3, 6, 5, 8, 11, 2, 7 (�ʱ� ������)
//   6, 9, 15, 12, 3, 7, 5, 8, 11, 2, 11
//  11,  6,  7(gap �� 5�� ��� ��������)



int main() { // 10�� �����͸� �� �����ϴ� ���� ���غ���.
	int arr[] = { 11,9,15,12,3,6,5,8,11,2,7 };
	int n = sizeof(arr) / sizeof(int); // 11
	printf("%d�� ������ ����\n", n);
	shellSort(arr, n);
	for (int i = 0; i < n; i++)
		printf("%4d", arr[i]);
	printf("\n");
	return 0;
}