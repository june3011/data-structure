//#include <stdio.h>
//
//int main()
//{
//	int* p;			// 1���� ������
//	// p�� � ������ �ּҸ� �����ϴ� �����̴�. (������ ����)
//	int(*ptr)[5];	// ?  //�迭 ������
//	int arr[5];		// �迭
//	p = arr;
//	ptr = &arr;
//	printf("p = %p, ptr = %p\n", p, ptr);
//	p++;		// 4 byte
//	ptr++;		// 20 byte ==> 5���� �迭�� ptr�� ����Ű�� �ֱ� ������ 5���� ���� 4 byte�� �����Ͽ��� 20 byte�� �����ȴ�.
//	printf("p = %p, ptr = %p\n", p, ptr);
//
//	return 0;
//}