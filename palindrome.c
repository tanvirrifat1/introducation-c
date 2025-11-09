#include <stdio.h>

int is_palindrome(char Str[])
{

    int len = strlen(Str);

    for (int i = 0; i < len; i++)
    {

        if (Str[i] != Str[len - i - 1])
        {
            return 0;
        }
    }
    return 1;
}

int main()
{

    char S[1001];
    scanf("%s", S);

    int res = is_palindrome(S);

    if (res == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }

    return 0;
}