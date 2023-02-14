#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b) { return a > b; }

void solve() {
  int n;
  cin >> n;
  vector<int> pp, pp1;
  int hi = 0;
  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    hi = max(hi, temp);
    pp.push_back(temp);
    pp1.push_back(temp);
  }
  sort(pp1.begin(), pp1.end(), cmp);

  for(int i = 0; i < n; i++) {
    if(pp[i]- pp1[0] != 0) {
        cout << pp[i] - pp1[0] << " ";
    }
    else {
        cout << pp[i] - pp1[1] << " ";
    }
  }

  cout << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}