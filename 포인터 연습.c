//#include <stdio.h>
//
//int main() {
//	//배열의 이름은 주소
//	char str[] = "Hello";  //아래와 같은 의미
//	//char str[6] = "Hello"; //위와 같은 의미
//	//문자열 뒤에는 \0 (null문자) 이 생략되어서 Hello는 5글자여도 배열을 6까지 선언해야함
//	
//	char* p;
//	p = str;
//	//  II 위아래 같은 뜻
//	//p = &str[0]; //0번이 가리키는 주소와 배열의 전체 주소는 같다.
//
//	while (*p)
//		putchar(*p++); //문자 출력 후 주소 증가
//	return 0;
//}