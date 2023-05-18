#include <stdio.h>
int main()
{
  int i, j, n, k;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (i = 0; i <= n; i++)
  {
    k = 1;
    for (j = 1; j <= (2 * n - 1); j++)
    {
      if (j >= (n + 1 - i) && j <= (n - 1 + i))
      {
        printf(" ");
      }
      else if (j <= n)
      {
        printf("%d", k);
        k++;
      }
      else
      {
        if (i < 1)
        {
          k--;
          printf("%d", k - 1);
        }
        else
        {
          k--;
          printf("%d", k);
        }
      }
    }
    printf("\n");
  }
  return 0;
}