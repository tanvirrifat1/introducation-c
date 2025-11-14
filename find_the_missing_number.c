#include <stdio.h>

int main()
{

    int T;

    scanf("%d", &T);

    long long int M;

    int a, b, c;

    for (int i = 0; i < T; i++)
    {

        scanf("%lld %d %d %d", &M, &a, &b, &c);

        long long int mul = a * b * c;

        if (M == 0)
        {
            printf("0\n");
        }
        else if (M % mul == 0)
        {
            printf("%lld\n", M / mul);
        }
        else
        {
            printf("-1\n");
        }
    }

    return 0;
}