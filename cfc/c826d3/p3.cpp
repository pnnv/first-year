#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> v;
  vector<int> preSum(n);
  vector<int> endSum(n);

  for (int i = 0; i < n; i++) {
    int temp;
    cin >> temp;
    v.push_back(temp);
  }
  preSum[0] = v[0];
  endSum[n - 1] = v[n - 1];

  for (int i = 1; i < n; i++) {
    preSum[i] = preSum[i - 1] + v[i];
    endSum[n - 1 - i] = endSum[n - i] + v[n - i - 1];
  }

  int p1 = 0;
  int p2 = n - 1;
  int sum = 0;

  while (p1 < p2) {
    if (preSum[p1] < endSum[p2]) {
      p1++;
    } else if (preSum[p1] > preSum[p2]) {
      p2--;
    } else if (preSum[p1] == endSum[p2]) {
      sum = preSum[p1];
      break;
    }
  }

  int temp = 0;
  int count = 0;
  int mx = 0;

  for(int i = 0; i < n; i++) {
    if(temp < sum) {
        temp += v[i];
        count++;
    }
    mx = max(mx, count);
    
    if(temp == sum) {
        temp = 0;
        count = 0;
    }

  }

  cout << mx << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}