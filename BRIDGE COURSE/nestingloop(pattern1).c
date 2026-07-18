#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}




#include <stdio.h>

int main()
{
    int n, i = 1, j;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    while(i <= n)
    {
        j = 1;
        while(j <= i)
        {
            printf("%d ", j);
            j++;
        }
        printf("\n");
        i++;
    }

    return 0;
}