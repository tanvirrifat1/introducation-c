#include <stdio.h>

int main()
{

    int n;

    scanf("%d", &n);

    int a[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int fre[10] = {0};

    for (int i = 0; i < n; i++)
    {
        int vl = a[i];
        fre[vl]++;
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d => %d\n ", i, fre[i]);
    }

    return 0;
}