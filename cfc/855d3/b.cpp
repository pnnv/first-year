#include <bits/stdc++.h>
#include <cctype>
#include <cstdio>
typedef long long ll;
using namespace std;

void solve() {
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  map<char, int> m;

  for (int i = 0; i < n; i++) {
    m[s[i]]++;
  }

  int pairs = 0;

  for (auto it : m) {
    if ((int)(it.first) < 97) {
      if (m[it.first + ' '] > 0) {
        m[it.first] -= min(m[it.first], m[(char)(it.first + ' ')]);
        m[it.first + 32] -= min(m[it.first], m[(char)(it.first + ' ')]);
        pairs += min(m[it.first], m[(char)(it.first + ' ')]);
      }
    } else {
      if (m[(char)(it.first - ' ')] > 0) {
        m[it.first] -= min(m[it.first], m[(char)(it.first - ' ')]);
        m[it.first - 32] -= min(m[it.first], m[(char)(it.first - ' ')]);
        pairs += min(m[it.first], m[(char)(it.first - ' ')]);
      }
    }
  }

  cout << pairs << " ";

  for (auto it : m) {
    if (k <= 0) {
      break;
    }

    while (it.second > 1) {
      it.second -= 2;
      pairs++;
      k--;
      if(k <= 0) {
        break;
      }
    }
  }

  cout << pairs << endl;
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