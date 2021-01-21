#include <stdio.h>

int main(void)
{
    int M, N, arr[1000001] = { 0, };
    scanf("%d %d", &M, &N);

    arr[0] = 1, arr[1] = 1;
    for (int j = 2; j < 1000001 / j; j++)
    {
        if (arr[j] == 1) continue;
        for (int i = j * j; i < 1000001; i += j)
            if (i % j == 0) arr[i] = 1;
    }

    for (int i = M; i <= N; i++)
        if (arr[i] == 0)
            printf("%d\n", i);
    return 0;
}

// 20.01.21. ¹éÁØ 1921 '¼Ò¼ö ±¸ÇÏ±â'
