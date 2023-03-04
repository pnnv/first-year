#include <algorithm>
#include <bits/stdc++.h>
#include <cstdio>
typedef long long ll;
using namespace std;

void solve() {
  int n;
  cin >> n;
  string meow;
  cin >> meow;

  transform(meow.begin(), meow.end(), meow.begin(), ::tolower);

  string temp;
  temp.push_back(meow[0]);
  for(int i = 1; i < meow.length(); i++) {
    if(meow[i] != temp.back()) {
      temp.push_back(meow[i]);
    } else {
      continue;
    }
  }

  if(temp == "meow") {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}