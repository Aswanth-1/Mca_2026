#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter n: ");
    scanf("%d", &n);

    // Increasing part
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    // Decreasing part
    for(i = n - 1; i >= 1; i--)
    {
        for(j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}


#include <stdio.h>

int main()
{
    int n, i, j, stars;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i = 1; i <= 2 * n - 1; i++)
    {
        if(i <= n)
            stars = i;
        else
            stars = 2 * n - i;

        for(j = 1; j <= stars; j++)
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}