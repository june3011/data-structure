//#include <stdio.h>
//
//void swap1(int a, int b) { //call by value
//	int t = a;
//	a = b;
//	b = t;
//}
//
//void swap2(int* a, int* b) { //call by reference
//	int t = *a;
//	*a = *b;
//	*b = t;
//} //�����͸� ����ؼ� swap() ȣ�� �Ŀ��� ���� ���� ����Ǿ� ����
//
//int main() {
//	int n1 = 5, n2 = 7;
//	printf("n1 = %d, n2 = %d\n", n1, n2);
//	swap1(n1, n2);
//	printf("n1 = %d, n2 = %d\n", n1, n2);
//	swap2(&n1, &n2);
//	printf("n1 = %d, n2 = %d\n", n1, n2);
//}