#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int b[n];
        int c[n];

        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (b[i] < b[j])
                {
                    int temp = b[i];
                    b[i] = b[j];
                    b[j] = temp;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            int cal = a[i] - b[i];
            c[i] = cal;
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", abs(c[i]));
        }
        printf("\n");
    }
    return 0;
}