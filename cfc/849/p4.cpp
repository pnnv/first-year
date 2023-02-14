#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  int mx = 0;
  for (int i = 0; i < n; i++) {
    map<char, int> m1, m2;
    for (int j = 0; j <= i; j++) {
      m1[s[j]]++;
    }
    for (int j = i + 1; j < n; j++) {
      m2[s[j]]++;
    }
    int a = m1.size();
    int b = m2.size();

    if (mx < (a + b)) {
      mx = a + b;
    }
  }

  cout << mx << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}