#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  int a[n];
  int neg = 0;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    if (a[i] < 0) {
      neg++;
    }
  }

  int sum = 0;
  int A[n];
  for (int i = 0; i < n; i++) {
    sum += abs(a[i]);
    A[i] = abs(a[i]);
  }

  sort(A, A + n);

  if(neg&1) {
    cout << sum - 2*A[0] << endl;
  } else {
    cout << sum << endl;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}