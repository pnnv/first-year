#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  string s;
  cin >> n >> s;
  if (n != 5) {
    cout << "NO\n";
    return;
  }
  string name = "Timur";
  map<char, int> m;
  for(int i = 0; i < n; i++) {
    m[name[i]]++;
  }

  for(int i = 0; i < n; i++) {
    if(m[s[i]] != 0) {
        m[s[i]]--;
    } else {
        cout << "NO\n";
        return;
    }
  }
  
  cout << "YES\n";
  return;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}