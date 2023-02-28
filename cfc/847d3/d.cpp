#include <bits/stdc++.h>
#include <cstdio>
typedef long long ll;
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> v;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    v.push_back(temp);
  }

  sort(v.begin(), v.end());
  map<int, int> m;
  for (int i = 0; i < n; i++) {
    m[v[i]]++;
  }

  vector<int> temp;
  temp.push_back(v[0]);
  for (int i = 1; i < n; i++) {
    if (v[i] != temp.back()) {
      temp.push_back(v[i]);
    } else {
      continue;
    }
  }

  int sets = 0;

  for (int i = 0; i < temp.size(); i++) {
    while (m[temp[i]] > 0) {
      sets++;
      m[temp[i]]--;
      for (int k = temp[i] + 1; k <= v.back(); k++) {
        if (m[k] > 0) {
          m[k]--;
        } else {
          break;
        }
      }
    }
  }

  cout << sets << endl;
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