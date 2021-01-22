#include <stdio.h>

int sequence(int n);

int main(void)
{
    int num;
    scanf("%d", &num);
    printf("%d", sequence(num));

    return 0;
}

int sequence(int n) {
    if (n <= 1) return n;
    else {
        return n = sequence(n - 1) + sequence(n - 2);
    }
}

// 20.01.22. ¹éÁØ 10870 'ÇÇº¸³ªÄ¡ ¼ö'
