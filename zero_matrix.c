#include <stdio.h>

int main()
{

    int r, c;

    scanf("%d %d", &r, &c);

    int a[r][c];

    for (int i = 0; i < r; i++)
    {

        for (int j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int total = r * c;

    int zero;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {

            if (a[i][j] == 0)
            {
                zero++;
            }
        }
    }

    if (total == zero)
    {
        printf("Zero metrix");
    }
    else
    {
        printf("Not Zero metrix");
    }

    return 0;
}