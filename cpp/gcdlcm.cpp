#include <bits/stdc++.h>
using namespace std;
/*
for two numbers a and b;

  *** (a * b)/gcd(a,b) = lcm(a, b); ***
*/

int gcd(int a, int b) {
  if (b == 0) {
    return a;
  }
  return gcd(b, a % b);
}/* recursive function to find gcd of two integers a and b (O(logN)) */

int main() {
    int a, b;
    cin >> a >> b;

    cout << __gcd(a, b) << endl;
}