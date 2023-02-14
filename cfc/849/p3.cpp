#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int ans = n;
  for (int i = 0; i < n / 2; i++) {
    if (s[i] != s[n - 1 - i]) {
      ans -= 2;
    } else if (s[i] == s[n - 1 - i]) {
      break;
    }
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