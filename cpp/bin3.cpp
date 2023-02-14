#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int n, cows;
int positions[N];

bool canPlaceCows(int minDist) {
  int lastpos = -1;
  int cowsCount = cows;
  for (int i = 0; i < n; i++) {
    if (positions[i] - lastpos >= minDist || lastpos == -1) {
      cowsCount--;
      lastpos = positions[i];
    }
    if (cowsCount == 0) {
      break;
    }
  }
  return cowsCount == 0;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    cin >> n >> cows;
    for (int i = 0; i < n; i++) {
      cin >> positions[i];
    }
    sort(positions, positions + n);

    int lo = 0, hi = 1e9, mid;
    while (hi - lo > 1) {
      int mid = (hi + lo) / 2;
      if (canPlaceCows(mid)) {
        lo = mid;
      } else {
        hi = mid - 1;
      }
    }
    if (canPlaceCows(hi)) {
      cout << hi << endl;
    } else {
      cout << lo << endl;
    }
  }
}