#include <stdio.h>

int get_integer(void)
{
    int n;
    scanf("%d", &n);
    return n;
}

int factorial(int n)
{
    int res = 1;

    for (int i = 1; i <= n; i++)
    {
        res *= i;
    }

    return res;
}

int combination(int n, int r)
{
    return factorial(n) / (factorial(n - r) * factorial(r));
}

int main(void)
{
    int n, r;

    printf("n 입력: ");
    n = get_integer();

    printf("r 입력: ");
    r = get_integer();

    int result = combination(n, r);

    printf("Combination: %d\n", result);

    return 0;
}