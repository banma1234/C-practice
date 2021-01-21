#include <stdio.h>
/* 20. 01. 21. '에라토스테네스의 체'
'에라토스테네스의 체' : 소수를 대량으로 빠르고 정확하게 구하는 알고리즘 */
int eratostenes();

int main() {
	int num;
	scanf("%d", &num);
	printf("\n%d", eratostenes(num));	// 입력받은 수 이전까지의 소수 출력

	return 0;
}

int eratostenes(int n) {
	int arr[1001] = { 0 };
	for (int i = 2; i <= n; i++) {
		arr[i] = i;		// 배열을 입력받고 초기화
	}
	for (int i = 2; i <= n; i++) {
		if (arr[i] == 0)	continue;	// 초기화된 배열의 경우 넘어간다
		for (int j = 2 * i; j <= n; j += i) {
			arr[j] = 0;		// 2부터 시작해서 특정 수의 배수에 해당하는 수를 모두 지운다.
		}
	}
	for (int i = 2; i <= n; i++) {
		if (arr[i] != 0) printf("%d ", arr[i]);		// 남아있는 수 모두 출력
	}

	return 0;
}
