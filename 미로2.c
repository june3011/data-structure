#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

int m[9][9] = {//maze
			{2,2,2,2,2,2,2,2,2},
			{2,0,0,0,0,0,0,0,2},
			{2,0,2,2,0,2,2,0,2},
			{2,0,2,0,0,2,0,0,2},
			{2,0,2,0,2,0,2,0,2},
			{2,0,0,0,0,0,2,0,2},
			{2,2,0,2,2,0,2,2,2},
			{2,0,0,0,0,0,0,0,2},
			{2,2,2,2,2,2,2,2,2} };

int Si, Sj, Ei, Ej, success, idx, Path_i[100], Path_j[100];
//S : Start, 출발점 
//E : End, 도착점
//idx 경로 배열 인덱스
//ri, rj : 지나간 길을 저장함(i는 행, j는 열)

int visit(int, int);

int main() {
	idx = 0;
	success = 0;
	printf("미로탈출 게임\n");
	Si = 1, Sj = 1;
	Ei = 7, Ej = 7;
	if (visit(Si, Sj) == 0) {
		printf("못 찾았음\n");
	}
	else {
		printf("모든 경로를 찾았음\n");
	}
	return 0;
}

int visit(int i, int j) {
	static int path = 1; //찾은 경로 개수
	m[i][j] = 1;
	Path_i[idx] = i, Path_j[idx] = j; //경로 Path를 저장
	idx++;
	//만약 도착점에 도달했다면
	if (i == Ei && j == Ej) {
		printf(" %d번째 찾은경로\n", path++);
		/*for (int k = 0; k < idx; k++) {
			printf("(%d %d)", Path_i[k], Path_j[k]);
		}*/
		for (int k = 0; k < 9; k++) {
			for (int kk = 0; kk < 9; kk++) {
				if (m[k][kk] == 2) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 8);
					printf("■");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				}
				else if (m[k][kk] == 1) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 1);
					printf("■");
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
				}
				else if (m[k][kk] == 0) {
					SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 7);
					printf("■");
				}
			}
			printf("\n");
		}
		printf("\n");
		success = 1; //경로 찾기 성공
	}
	// ***미로를 본격적으로 탐색하는 코드***
	if (m[i][j + 1] == 0) //오른쪽으로 탐색   여기서부터
		visit(i, j + 1);
	if (m[i + 1][j] == 0) //아래쪽으로 탐색
		visit(i + 1, j);
	if (m[i][j - 1] == 0) //왼쪽으로 탐색
		visit(i, j - 1);
	if (m[i - 1][j] == 0) //위쪽으로 탐색      여기까지 외우기
		visit(i - 1, j);
	idx--;
	m[i][j] = 0;
	return success;
}