#include <bits/stdc++.h>
using namespace std;

int main() {
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

  for (auto it : preSum) {
    cout << it << "  ";
  }
  cout << endl;
  for (auto it : endSum) {
    cout << it << " ";
  }
  cout << endl;
}