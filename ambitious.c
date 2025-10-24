#include <stdio.h>

int main()
{

    int n;

    scanf("%d", &n);

    int first = n / 10;
    int last = n % 10;

    printf("%d %d\n", first, last);

    if (last % first == 0 || first % last == 0)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;
}