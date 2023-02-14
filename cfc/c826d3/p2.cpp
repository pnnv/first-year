#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  queue<int> q;
  for (int i = 1; i <= n; i++) {
    q.push(i);
  }
  for (int i = 0; i < n / 2; i++) {
    q.push(q.front());
    q.pop();
  }

  if (q.size() == 3) {
    cout << -1 << endl;
  } else {
    for (int i = 0; i < n; i++) {
      cout << q.front() << " ";
      q.pop();
    }
    cout << endl;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}