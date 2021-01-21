#include <stdio.h>

int main()
{
    int a, b, v, res = 0;
    scanf("%d%d%d", &a, &b, &v);
    if ((v - a) % (a - b) == 0) {
        res = (v - a) / (a - b) + 1;
    }
    else {
        res = (v - a) / (a - b) + 2;
    }
    
    printf("%d", res);

    return 0;
}
// '21.01.17. 백준 2869 '달팽이는 올라가고 싶다'