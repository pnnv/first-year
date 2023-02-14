#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  map<string, int> m[3];
  string s[3][n];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < n; j++) {
      cin >> s[i][j];
      m[i][s[i][j]]++;
    }
  }

  int scores[3] = {0, 0, 0};

  for(int i = 0; i < n; i++) {
    if((m[0][s[0][i]] + m[1][s[0][i]] + m[2][s[0][i]]) == 3) {
        scores[0] += 3;
    } else if((m[0][s[0][i]] + m[1][s[0][i]] + m[2][s[0][i]]) == 1) {
        scores[0]++;
    }
  }


  for(int i = 0; i < n; i++) {
    if((m[0][s[1][i]] + m[1][s[1][i]] + m[2][s[1][i]]) == 3) {
        scores[1] += 3;
    } else if((m[0][s[1][i]] + m[1][s[1][i]] + m[2][s[1][i]]) == 1) {
        scores[1]++;
    }
  }


  for(int i = 0; i < n; i++) {
    if((m[0][s[2][i]] + m[1][s[2][i]] + m[2][s[2][i]]) == 3) {
        scores[2] += 3;
    } else if((m[0][s[2][i]] + m[1][s[2][i]] + m[2][s[2][i]]) == 1) {
        scores[2]++;
    }
  }

  cout << scores[0] << " " << scores[1] << " " << scores[2] << endl;
}

int main(void) {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}