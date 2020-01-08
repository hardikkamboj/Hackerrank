#include <stdio.h>
#include <stdlib.h>

int main() {
  int n;
  scanf("%d", &n);
  int a[n][n];
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%1d", &a[i][j]);
    }
  }
  for (int i = 1; i >= 1 && i <= n - 2; i++)
    {
    for (int j = 1; j >= 1 && j <= n - 2; j++)
     {
      int up, left, down, right;
      up = i - 1;
      down = i + 1;
      right = j + 1;
      left = j - 1;
      int flag1 = 0, flag2 = 0, count = 0;
      if (a[i][j] >= a[up][j] && a[i][j] >= a[down][j] &&
          a[i][j] >= a[i][right] && a[i][j] >= a[i][left])
        flag1 = 1;
      if (a[i][j] >= a[up][left] && a[i][j] >= a[up][right] &&
          a[i][j] >= a[down][left] && a[i][j] >= a[down][right])
        flag2 = 1;
      if (flag1 == 1 && flag2 == 1) {prinf("X ");      }
     else printf("%d ",a[i][j]);
    }printf("\n");
  }


  return 0;
}
