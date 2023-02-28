#include <iostream>
using namespace std;

int abs(int x) {
  if(x < 0) {
    return (-1) * (x);
  } else return x;
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);

  int t;
  cin >> t;

  int n, a, b, c ,d;
  cin >> n >> a >> b >> c >> d;

  if(abs(b-c) > 1) cout << "Yes\n";
  else if(abs(b-a) == 1) cout << "Yes\n";
  else if(b != 0) cout << "Yes\n";
  else if(a == 0 || d == 0) cout << "Yes\n";
  else cout << "No\n";
  
  fflush(stdout);
  return 0;
}