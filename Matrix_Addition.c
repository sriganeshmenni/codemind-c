#include <stdio.h>
int main() {
  int r, c,g,h, a[100][100], b[100][100], sum[100][100], i, j;
  scanf("%d", &r);
  scanf("%d", &c);

  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      scanf("%d", &a[i][j]);
    }

scanf("%d", &g);
  scanf("%d", &h);
  for (i = 0; i < g; ++i)
    for (j = 0; j < h; ++j) {
      scanf("%d", &b[i][j]);
    }

  
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      printf("%d ", sum[i][j]);
      if (j == c - 1) {
        printf("
");
      }
    }

  return 0;
}

