#include <stdio.h>

int main()
{

    int N;

    scanf("%d", &N);

    int space = N - 1;

    int val = 1;

    for (int i = 1; i <= N; i++)
    {

        for (int j = 1; j <= space; j++)
        {
            printf(" ");
        }

        for (int j = 1; j <= val; j++)
        {
            printf("%d", j);
        }
        printf("\n");
        val++;
        space--;
    }

    return 0;
}