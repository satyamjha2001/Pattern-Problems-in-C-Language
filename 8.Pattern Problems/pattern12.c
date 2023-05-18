#include <stdio.h>
int main()
{
    int i, j, n, k;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--)
    {
        k = 65;
        for (j = 1; j <= (2 * n - 1); j++)
        {
            if (j >= n - i + 1 && j <= n + i - 1)
            {
                if (j <= n)
                {
                    printf("%c", k);
                    k++;
                }
                else if (j <= n + i - 1)
                {
                    k--;
                    printf("%c", k - 1);
                }
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}