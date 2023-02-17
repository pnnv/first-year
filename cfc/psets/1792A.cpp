#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  map<int, int> m;

  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    m[temp]++;
  }
  int ans = 0;

  if(m[1] != 0) {
    if(m[1]&1) {
      ans += (m[1]/2) + 1;
    } else {
      ans += m[1]/2;
    }

    ans += n - m[1];
  } else {
    ans += n;
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