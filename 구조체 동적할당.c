#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct STU {
	char name[10];
	int age;
}stu;

int main() {
	stu* student;
	student = (stu*)malloc(sizeof(stu)); //�����ϱ�
	//����Ǵ� ������ �޸𸮸� �Ҵ�
	strcpy(student->name, "KIM"); //�����͸� ���� ������ . ���� -> �� ����ü�� ����Ŵ
	student->age = 17;
	//(*student).age = 17; // ���� ���̶� ���� ��
	free(student); //�޸� ����
	return 0;
}