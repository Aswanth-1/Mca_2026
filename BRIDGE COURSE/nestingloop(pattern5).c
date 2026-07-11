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
            if(i == 1)
                printf("1 ");
            else if(i == 2 || i == 3 || i == 6)
            {
                if(j % 2 == 1)
                    printf("0 ");
                else
                    printf("1 ");
            }
            else
            {
                if(j % 2 == 1)
                    printf("1 ");
                else
                    printf("0 ");
            }
        }
        printf("\n");
    }

    return 0;
}




#include <stdio.h>

int main()
{
    int n, i, j, start;

    printf("Enter rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i == 1)
            start = 1;
        else if(i == 2 || i == 3 || i == 6)
            start = 0;
        else
            start = 1;

        for(j = 1; j <= i; j++)
        {
            printf("%d ", start);
            start = 1 - start;
        }

        printf("\n");
    }

    return 0;
}