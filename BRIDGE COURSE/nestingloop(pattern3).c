#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            if(j % 2 == 1)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int n, i, j, value;

    printf("Enter rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        value = 1;

        for(j = 1; j <= i; j++)
        {
            printf("%d ", value);
            value = 1 - value;
        }

        printf("\n");
    }

    return 0;
}