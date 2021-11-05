#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct STU {
	char name[10];
	int age;
}stu;

int main() {
	stu* student;
	student = (stu*)malloc(sizeof(stu)); //이해하기
	//실행되는 시점에 메모리를 할당
	strcpy(student->name, "KIM"); //포인터를 썻기 때문에 . 말고 -> 로 구조체를 가리킴
	student->age = 17;
	//(*student).age = 17; // 위에 줄이랑 같은 뜻
	free(student); //메모리 삭제
	return 0;
}