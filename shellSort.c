#include <stdio.h>
// 'Donald L. Shell' 이라는 사람이 제안한방법으로,
// 삽입정렬을 보완한 알고리즘이다.
void shellSort(int arr[], int n) {	// n : 11
	int i, j, tmp, gap;
	for (gap = n / 2; gap > 0; gap /= 2) {	// gap = gap / 2
		// if (! ( gap % 2 )) gap++;	// 짝수면 홀수로
		for (i = gap; i < n; i++) {	// 삽입정렬 응용
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

//  11, 9, 15, 12, 3, 6, 5, 8, 11, 2, 7 (초기 데이터)
//   6, 9, 15, 12, 3, 7, 5, 8, 11, 2, 11
//  11,  6,  7(gap 이 5인 경우 삽입정렬)



int main() { // 10개 데이터를 쉘 정렬하는 법을 말해보자.
	int arr[] = { 11,9,15,12,3,6,5,8,11,2,7 };
	int n = sizeof(arr) / sizeof(int); // 11
	printf("%d개 데이터 정렬\n", n);
	shellSort(arr, n);
	for (int i = 0; i < n; i++)
		printf("%4d", arr[i]);
	printf("\n");
	return 0;
}