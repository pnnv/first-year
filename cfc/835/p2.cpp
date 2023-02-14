#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    string s;
    cin >> n >> s;
    int len = 0;

    for(int i = 0; i < s.length(); i++) {
        len = max(len, (int)s[i] - 96);
    } 

    cout << len << endl;

}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}