#include <stdio.h>
int main()
{
    int i, j, k, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        k = 'A';
        for (j = 1; j <= (2 * n - 1); j++)
        {
            if (j < i + n - 1 && j >= n + 2 - i)
            {
                printf(" ");
            }
            else if (j <= n)
            {
                printf("%c", k);
                k++;
            }
            else if (j >= n + 1)
            {
                if (i < 2)
                {
                    k--;
                    printf("%c", k - 1);
                }
                else
                {
                    k--;
                    printf("%c", k);
                }
            }
        }
        printf("\n");
    }
    return 0;
}