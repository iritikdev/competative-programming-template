#include <stdio.h>

void solve()
{
  char *s = "hello";
  char *p = "hello";
  if (s == p)
    printf("YES");
  else
    printf("NO");
}

int main()

{
#ifndef ONLINE_JUDGE
  freopen("./c++/input.txt", "r", stdin);
  freopen("./c++/output.txt", "w", stdout);
#endif
  solve();
}