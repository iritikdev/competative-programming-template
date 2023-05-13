#include <iostream>
using namespace std;
void solve() {
   if ("ABC" == "ABC") printf("EQUAL");
   else printf("NO");
}

int main() {
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    solve();
}