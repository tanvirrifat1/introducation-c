#include <stdio.h>

void fun(int i)
{
    if (i == 6)
        return;

    printf("%d\n", i);
    fun(i + 1);
}

int main()
{
    int i = 0;
    fun(i);
    return 0;
}
