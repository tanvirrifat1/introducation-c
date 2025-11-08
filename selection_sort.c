#include <stdio.h>

int sum(int sum1, int sum2)
{

    int ans = sum1 + sum2;
    return ans;
}

int main()

{

    int val = sum(10, 60);
    int val2 = sum(-20, 45);

    printf("%d %d", val, val2);

    return 0;
}