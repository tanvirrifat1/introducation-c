#include <stdio.h>

void melllo()
{
    printf("mello\n");
}

void gelllo()
{
    printf("gelllo\n");
    melllo();
}
void helllo()
{
    printf("hello\n");
    gelllo();
}

int main()
{

    printf("hi\n");

    helllo();

    return 0;
}