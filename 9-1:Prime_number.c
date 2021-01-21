#include <stdio.h>

int main2() {
	int n, res, count = 0, k;
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &res);
		if (res == 1) continue;
		if (res % 2 != 0) {
			for (k = 3; k < res; k = k + 2) {
				if (res % k == 0) break;
			}
			if (k >= res) count++;
		}
		else if (res == 2) count++;
	}
	printf("%d", count);
	return 0;
}
// '21.01.17. ¹éÁØ 1978 '¼Ò¼ö Ã£±â'
