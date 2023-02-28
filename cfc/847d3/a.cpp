#include <bits/stdc++.h>
using namespace std;

string pie = "314159265358979323846264338327";

void solve() {
  string s;
  cin >> s;
  int correct = 0;

  for(int i  = 0; i < s.length(); i++) {
    if(s[i] == pie[i]) correct++;
    else break;
  }

  cout << correct << endl;;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;
  while(t--) {
    solve();
  }
}