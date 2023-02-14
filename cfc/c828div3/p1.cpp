#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int num[n];
  for(int i = 0; i < n; i++) {
    cin >> num[i];
  }

  string s;
  cin >> s;

  map<char, int> m; bool fl = true;
  for(int i = 0; i < n; i++) {
    if(m[s[i]] == 0) {
        m[s[i]] = num[i];
    } else {
        if(m[s[i]] == num[i]) {
            continue;
        } else {
            fl = false;
            break;
        }
     }
  }

  if(fl) {
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