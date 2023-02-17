#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  bool fl = false;
  while (t--) {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];

    if (abs(a[0] - a[1]) % 2 == 0 && abs(a[1] - a[2]) % 2 == 0 &&
        abs(a[0] - a[2]) % 2 == 0 && abs(a[0] - a[1]) > 1 &&
        abs(a[1] - a[2]) > 1 && abs(a[0] - a[2]) > 1) {
      fl = true;
    }

    if (fl) {
      int ans = 0;
      while (!(a[0] == a[1] && a[1] == a[2])) {
        sort(a, a + 3);
        a[0]++;
        a[1]++;
        a[2]--;
        ans++;
      }
      cout << ans << endl;
    } else {
      cout << -1 << endl;
    }
  }
}
