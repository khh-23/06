#include <stdio.h>

#include <stdio.h>

int sumTwo(int a, int b)
{
    return a + b;
}

int square(int n)
{
    return n * n;
}

int get_max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}

int main(void)
{
    printf("sumTwo result : %d\n", sumTwo(3, 5));
    printf("square result : %d\n", square(4));
    printf("get_max : %d\n", get_max(7, 3));

    return 0;
}