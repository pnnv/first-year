#include <bits/stdc++.h>
using namespace std;
/*
    *** bitmasking ***
    2, 3    -> 1 1 0 0  = 12
    0, 1, 2 -> 0 1 1 1  = 7
    1, 3    -> 1 0 1 0  = 10


*/

int main() {
  int n;
  cin >> n;
  vector<int> masks(n, 0);
  for (int i = 0; i < n; i++) {
    int numWorkers;
    cin >> numWorkers;
    int mask = 0;
    for (int j = 0; j < numWorkers; j++) {
      int day;
      cin >> day;
      mask = (mask | (1 << day));
    }
    masks[i] = mask;
  }

  int maxDays = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      int intersection = (masks[i] & masks[j]);
      int commonDays = __builtin_popcount(intersection);
      maxDays = max(commonDays, maxDays);
    }
  }
}