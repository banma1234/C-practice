#include <stdio.h>

int factorial(int n);

int main(void)
{
    int num;
    scanf("%d", &num);
    printf("%d", factorial(num));

    return 0;
}

int factorial(int n) {
    if (n <= 1) {
        return 1;
    }
    else {
        return n *= factorial(n - 1);
    }
}

// 20.01.22. 백준 10872 '팩토리얼'
