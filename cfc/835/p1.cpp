/*
complete problem set 
https://codeforces.com/contest/1760/problems
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
    int x[3];
    for(int i = 0; i < 3; i++) {
        cin >> x[i];
    }

    sort(x, x+3);
    cout << x[1] << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}