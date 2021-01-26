#include <stdio.h>

int main(void)
{
    int n, m, card[100] = { 0 };
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; i++) {
        scanf("%d", &card[i]);
    }
    int max = 0, sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            for (int k = j + 1; k < n; k++) {
                sum = card[i] + card[j] + card[k];
                if (sum > max && sum <= m) {
                    max = sum;
                }
            }
        }
    }
    printf("%d", max);

    return 0;
}

// 20.01.26. 백준 2798 '블랙잭'
