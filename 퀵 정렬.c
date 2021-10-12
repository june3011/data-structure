#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SWAP(x,y,t) ((t)=(x),(x)=(y),(y)=(t))

int arr[10] = { 1,10,5,8,7,6,4,3,2,9 };
int n = 10;

void quicksort(int arr[], int left, int right) {
	if (left >= right) {	// ������ ������ ���� 1�� ���
		return;
	}
	int pivot = left;
	int i = left + 1;
	int j = right;
	int temp;

	while (i <= j) {	// i�� j������ ������
		while (arr[i] <= arr[pivot])	// i��ġ�� ���� pivot ��ġ�� �� ����
			i++;
		while (arr[j] >= arr[pivot] && j > left)	// 
			j--;
		if (i > j)	// i�� j�� ũ�ν� �Ǿ��� ���
			SWAP(arr[j], arr[pivot], temp);
		else	// i�� j���� ���� ���� �Ǻ��� ��ü���� ����.
			SWAP(arr[i], arr[j], temp);
	}
	quicksort(arr, left, j - 1);
	quicksort(arr, j + 1, right);
}




int main() {
	quicksort(arr, 0, n - 1);	// left 0, right n-1 (�迭 �ε���)
	//	���ĵ� ����� ��µǵ��� �ݺ����� ����Ͽ� �迭 ���� �����ֱ�
	for (int i = 0; i < n; i++) {
		printf("%3d", arr[i]);
	}
	// �� ���� �ð����⵵ O(NlogN)
	// �� ���� �ð����⵵ O(N^2)�� ���
	// 1 2 3 4 5
}



