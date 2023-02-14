#include <bits/stdc++.h>
using namespace std;

/*
Lower boud function gives us the index of the required element and if the
desired element is not present in the array or vector and if the given element
is not present in the array then it gives us the index of the next closest
element (greater then the given element).
*/
int lowerBound(vector<int> &v, int element) {
  int lo = 0, hi = v.size() - 1;

  while (hi - lo > 1) {
    int mid = (hi + lo) / 2;

    if (v[mid] < element) {
      lo = mid + 1;
    } else {
      hi = mid;
    } 
  }

  if (v[lo] >= element) {
    return lo;
  }
  if (v[hi] >= element) {
    return hi;
  }
  return -1;
}

/*
upper bound returns the index of strictly greater (clossest) element to the
given element.
*/

int upperBound(vector<int> &v, int element) {
  int lo = 0;
  int hi = v.size() - 1;
  int mid;

  while (hi - lo > 1) {
    int mid = (hi + lo) / 2;

    if (v[mid] <= element) {
      lo = mid + 1;
    } else {
      hi = mid;
    }
  }

  if (v[lo] > element) {
    return lo;
  } else if (v[hi] > element) {
    return hi;
  }
  return -1;
}

int main() {
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  int element;
  cin >> element;

  cout << lowerBound(v, element) << endl;
}