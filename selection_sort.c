#include <stdio.h>

void odd_even()
{

    int N;

    scanf("%d", &N);

    int A[N];

    for (int i = 0; i < N; i++)
    {
        scanf("%d", &A[i]);
    }

    int evenNum = 0, oddNum = 0;

    for (int i = 0; i < N; i++)
    {
        if (A[i] % 2 == 0)
        {
            evenNum++;
        }
        else
        {
            oddNum++;
        }
    }

    printf("%d %d\n", evenNum, oddNum);
}

int main()
{
    odd_even();
    return 0;
}