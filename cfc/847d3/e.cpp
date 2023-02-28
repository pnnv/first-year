/* https://codeforces.com/contest/1790/problem/E */

#include <bits/stdc++.h>
#include <cstdio>
typedef long long ll;
using namespace std;

void solve() {
  ll x;
  cin >> x;
  bool fl = true;

  for(ll i = 0; i <= (2*x); i++) {
    if((i ^ ((2*x)-i)) == x) {
      cout << i << " " << ((2*x)-i) << endl;
      fl = false;
      break;
    }
  }

  if(fl) {
    cout << -1 << endl;
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