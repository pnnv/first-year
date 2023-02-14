#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  bool candy = false;

  int x = 0;
  int y = 0;

  for (int i = 0; i < n; i++) {
    if (s[i] == 'U') {
      y++;
    }
    if (s[i] == 'D') {
      y--;
    }
    if (s[i] == 'R') {
      x++;
    }
    if (s[i] == 'L') {
      x--;
    }
    if (x == 1 && y == 1) {
      candy = true;
      break;
    }
  }

  if (candy) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}