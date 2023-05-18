#include <stdio.h>
int main()
{
  int i, j, n;
  printf("Enter a number: ");
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    for (j = 1; j <= (2 * n - 1); j++)
    {
      if (j >= (n + 1 - i) && j <= (n - 1 + i))
        printf(" ");
      else
        printf("*");
    }
    printf("\n");
  }
  return 0;
}