#include <bits/stdc++.h>
using namespace std;

void solve() {
  int a, ali, bo, d;
  cin >> a >> ali >> bo >> d;

  int ans = 0;

  if(a != 0) {
    ans += a + min(ali, bo)*2 + min(a + 1, abs( ali-bo) + d);
  } else {
    ans++;
  }


  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}