#include <stdio.h>
int main()
{
  int i, j, n, k, l;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (i = n; i >= 1; i--)
  {
    k = 1, l = i - 1;
    for (j = 1; j <= (2 * n - 1); j++)
    {
      if (j >= (n + 1 - i) && j <= (n - 1 + i))
      {
        if (k <= i)
          printf("%d", k++);
        else
          printf("%d", l--);
      }
      else
        printf(" ");
    }
    printf("\n");
  }
  return 0;
}