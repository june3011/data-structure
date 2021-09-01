//#include <stdio.h>
//
//int main()
//{
//	int* p;			// 1차원 포인터
//	// p는 어떤 변수의 주소를 저장하는 변수이다. (포인터 변수)
//	int(*ptr)[5];	// ?  //배열 포인터
//	int arr[5];		// 배열
//	p = arr;
//	ptr = &arr;
//	printf("p = %p, ptr = %p\n", p, ptr);
//	p++;		// 4 byte
//	ptr++;		// 20 byte ==> 5개인 배열을 ptr이 가리키고 있기 때문에 5개가 각각 4 byte씩 증가하여서 20 byte가 증가된다.
//	printf("p = %p, ptr = %p\n", p, ptr);
//
//	return 0;
//}