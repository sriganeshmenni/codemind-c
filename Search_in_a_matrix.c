#include <stdio.h>
int main() {
  int r, c,x,a[100][100], i, j;
  scanf("%d", &r);
  scanf("%d", &c);

  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
      scanf("%d", &a[i][j]);
    }
scanf("%d",&x);
int ans=0;
  
  for (i = 0; i < r; ++i)
    for (j = 0; j < c; ++j) {
     if(a[i][j]==x) ans=1;
    }
  printf("%d",ans);

  return 0;
}
