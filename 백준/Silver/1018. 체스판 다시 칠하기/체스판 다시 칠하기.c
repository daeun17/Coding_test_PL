#include <stdio.h>
// [baekjoon] 1018번 - 체스판 다시 칠하기

int main(void) {

	char ar[51][51] = { 0 };
	int n, m;
	scanf("%d %d", &n, &m);
	getchar();

	//체스판 입력
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%c", &ar[i][j]);
		}
		getchar();
	}

	//체스판 계산
	int min_cnt = n * m;
	for (int a = 0; a + 7 < n; a++) {
		for (int b = 0; b + 7 < m; b++) {
			//해당 위치부터 8*8만큼의 체스판을 살펴봄
			char tmp;
			int cnt1 = 0;	// 'B'로 시작하는 체스판일때 다시 칠해야 하는 개수
			int cnt2 = 0;	// 'W'로 시작하는 체스판일때 다시 칠해야 하는 개수
			for (int i = a; i < a + 8; i++) {
				if (i % 2 == a % 2) {
					tmp = 'B';
				}
				else {
					tmp = 'W';
				}
				for (int j = b; j < b + 8; j++) {
					if (ar[i][j] != tmp)cnt1++;
					else cnt2++;
					if (tmp == 'W')tmp = 'B';
					else tmp = 'W';
				}
			}

			int mcnt = cnt1;
			if (mcnt > cnt2) mcnt = cnt2;	// 둘중 작은 값을 mcnt에 저장
			
			if (min_cnt > mcnt) min_cnt = mcnt;
		}
	}	
	
	printf("%d", min_cnt);

	return 0;
}