// ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 5	// ���ÿ� ���� �� �ִ� �ִ� ������

void push(int);		// ���ÿ��� ������ �� �� ����
void pop();			// ���ÿ��� ������ �� �� ����
void display();		// ���ÿ� �ִ� ������ �����ֱ�

int stack[SIZE];
int top = -1;		// ���ÿ� ������ ��ġ


int main()
{
	int val, choice;
	printf("\n----Menu----\n");
	while (1) {
		printf("1. push    2. pop    3. display    4. exit\n");
		printf("Choice : ");
		scanf("%d", &choice);

		switch (choice) {
		case 1: // ���ÿ� push
			printf("�����͸� �Է��ϼ��� : ");
			scanf("%d", &val);
			push(val);
			break;
		case 2: // ���ÿ� pop
			pop();
			break;
		case 3: // ���� ���� display
			display();
			break;
		case 4: // ���α׷� ���� exit
			return 0;
		default:
			printf("�ٽ� �Է��ϼ���.");
		}
	}
	return 0;
}

void push(int val) { // ��������, �ϱ� �ʿ�
	if (top == SIZE - 1) // top >= SIZE-1
		printf("������ ������\n");
	else
		stack[++top] = val;
	// ó���� -1�� ���س��� push �� �� ���� top�� 1�� ����
}

void pop() { //��������, �ϱ� �ʿ�
	if (top == -1)
		printf("������ �����\n");
	else
		printf("%d ��(��) ������\n", stack[top--]);
	// pop �� �� ���� top�� ���� 1�� ��
}

void display() {
	if (top == -1)
		printf("������ �����\n");
	else
		for (int i = top; i >= 0; i--)
			printf("%4d", stack[i]);
	printf("\n");
}

