#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int existWord(char str[1000], char word[10]) {
	int word_len = 0;
	int cnt;

	// ���ڿ� ���� ���ϱ�
	for (int i = 0; word[i] != 0; i++) {
		word_len++;
	}

	// ������ 1 ������ 0 ��ȯ�ؼ� boolean �� ����
	for (int i = 0; str[i] != 0; i++) {
		cnt = 0;
		if (str[i] == word[0]) {
			cnt++;
			for (int j = 1; word[j] != 0; j++) {
				if (str[i + j] == word[j])cnt++;
				if (cnt == word_len)return 1;
			}
		}
	}
}

int main() {
	
	char input[1000] = { 0, };
	int times;

	scanf("%s", input);
	scanf("%d", &times);

	for (int i = 0; i < times; i++) {
		char word[10] = { 0, };
		scanf("%s", word);

		if (existWord(input, word))
			printf("True\n");
		else
			printf("False\n");
	}
	return 0;
}