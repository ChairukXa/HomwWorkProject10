#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
    int n, i, j, s;
    printf("Enter a number : ");
    scanf("%d", &n);
    for (i = n; i >= 0; i--)
    {
        printf("*");
    }
    for (i = 1; i <= n; i++)
    {
        printf("*");
    }
    printf("\n");
    for (i = 1; i <= n; i++)
    {
        for (j = n; j >= i; j--)
        {
            printf("*");
        }
        s = i * 2 - 2;
        while (s >= 0)
        {
            printf(" ");
            s--;
        }

        for (j = i; j <= n; j++)
        {
            printf("*");
        }

        printf("\n");
    }
    for (i = n - 1; i > 0; i--)
    {
        for (j = n; j >= i; j--)
        {
            printf("*");
        }
        s = i * 2 - 2;
        while (s >= 0)
        {
            printf(" ");
            s--;
        }
        for (j = i; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for (i = n; i >= 0; i--)
    {
        printf("*");
    }
    for (i = 1; i <= n; i++)
    {
        printf("*");
    }
    printf("\n");
    return 0;
}