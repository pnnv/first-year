#include <bits/stdc++.h>
#include <cstdio>
typedef long long ll;
using namespace std;

void solve() {
  int n, s, r;
  cin >> n >> s >> r;
  vector<int> v;
  v.push_back(s - r);
  int k = s - r;
  int i = n - 1;

  while (r > 0) {
    if((r-k) < (i-1)) {
      k--;
    } else {
      v.push_back(k);
      i--;
      r -= k;
    }
  }

  for (auto i : v) {
    cout << i << " ";
  }
  cout << endl;
}

int main() {
  freopen("io.txt", "r", stdin);
  freopen("op.txt", "w", stdout);

  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;  
}