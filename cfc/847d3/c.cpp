#include <bits/stdc++.h>
#include <cstdio>
typedef long long ll;
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> v[n];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n - 1; j++) {
      int temp;
      cin >> temp;
      v[i].push_back(temp);
    }
  }

  int k, first;
  bool fl = true;

  for (int i = 0; i < 3; i++) {
    if (v[0][0] == v[1][0] && v[1][0] == v[2][0]) {
      first = v[0][0];
    } else {
      if (v[0][0] == v[1][0]) {
        first = v[0][0];
        k = 2;
        fl = false;
      } else if (v[0][0] == v[2][0]) {
        first = v[0][0];
        k = 1;
        fl = false;
      } else {
        first = v[1][0];
        k = 0;
        fl = false;
      }
    }
  }

  if (fl) {
    for (int i = 0; i < n; i++) {
      if (v[i][0] != first) {
        k = i;
        break;
      }
    }
  }

  cout << first << " ";
  for(auto i : v[k]) {
    cout << i << " ";
  }
  cout << endl;
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