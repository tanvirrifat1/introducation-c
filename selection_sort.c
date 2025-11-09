#include <stdio.h>

int fun(int a[])
{

    for (int i = 0; i < 5; i++)
    {

        printf("%d\n", a[i]);
    }
}

int main()
{

    int a[5] = {1, 5, 6, 8, 9};

    fun(a);

    return 0;
}