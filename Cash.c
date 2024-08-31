#include <stdio.h>
int main(void)
{
    int i, c = 0;
g:
    printf("Enter change:");
    scanf("%d", &i);
    if (i <= 0)
    {
        goto g;
    }
    if (i >= 25)
    {
        do
        {
            i -= 25;
            c++;
        }
        while (i >= 25);
    }
    if (i >= 10)
    {
        do
        {
            i -= 10;
            c++;
        }
        while (i >= 10);
    }
    if (i >= 5)
    {
        do
        {
            i -= 5;
            c++;
        }
        while (i >= 5);
    }
    if (i < 5)
    {
        c += i;
    }
    printf("%d", c);
}
