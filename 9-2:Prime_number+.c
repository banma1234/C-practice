#include <stdio.h>

int main3()
{
    int m, i, j, n, sum = 0, min = 10001, count = 0;
    scanf("%d%d", &m, &n);
    for (i = m; i <= n; i++) {
        for (j = 2; j < i; j++) {
            if (i % j == 0) count++;
        }
        if (count == 0 && i != 1) {
            sum += i;
            if (min > i)   min = i;
        }
        count = 0;
    }

    if (sum == 0)  printf("-1");
    else
    {
        printf("%d\n%d", sum, min);
    }
    

    return 0;
}


// '21.01.11. ¹éÁØ 2581 '¼Ò¼ö'
