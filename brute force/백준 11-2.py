#include <stdio.h>

int function(int n);

int main(void)
{
    int num;
    scanf("%d", &num);
    for (int i = 1; i <= num; i++) {
        if (function(i) == num) {
            printf("%d", i);
            break;
        }
        else if (i == num) {
            printf("%d", 0);
        }
    }

    return 0;
}

int function(int n) {
    int res = 0;
    int input = n;
    while (input >= 1) {
        res += input % 10;
        input /= 10;
    }
    res += n;
    return res;
}

// 20.02.04. 백준 2231 '분해합'
