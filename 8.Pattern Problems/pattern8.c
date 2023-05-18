#include <stdio.h>
int main()
{
  int i, j, n, k, l;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    k = 1;
    for (j = 1; j <= (2 * n - 1); j++)
    {
      if (j >= (n + 1 - i) && j <= (n - 1 + i))
      {
        if (j <= n)
        {
          printf("%d", k);
          k++;
        }
        else if (j <= (n - 1 + i))
        {
          k--;
          printf("%d", k - 1);
        }
      }
      else
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}