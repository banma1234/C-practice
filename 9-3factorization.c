#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);
	for (int(i) = 2; i <= n; i++) {
		if (n % i == 0) {
			n /= i;
			printf("%d\n", i);
			i = 1;
		}
	}

	return 0;
}
// '21.01.21. 백준 11653 '소인수분해'