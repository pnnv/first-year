/*
https://codeforces.com/contest/1760/problem/D
*/

#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> b;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    if (i == 0 || x != b.back()) {
      b.push_back(x);
    }
  }

  int count = 0;

  for (int i = 0; i < b.size(); i++) {
    if (i == 0) {
      if (b[i] < b[i + 1]) {
        count++;
      }
    } else if (i != 0 && i != b.size() - 1) {
      if (b[i] < b[i + 1] && b[i] < b[i - 1]) {
        count++;
      }
    } else if (i == b.size() - 1) {
      if (b[i] < b[i - 1]) {
        count++;
      }
    }
  }

  if (count == 1) {
    cout << "YES\n";
  } else if (b.size() == 1) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}


/*
solution: 

#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a;
    for(int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if(i == 0 || x != a.back())
        {
            a.push_back(x);
        }
    }
    int num_valley = 0;
    for(int i = 0; i < a.size(); i++)
    {
        if((i == 0 || a[i-1] > a[i]) && (i == a.size()-1 || a[i] < a[i+1]))
        {
            num_valley++;
        }
    }
    if(num_valley == 1)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int32_t main(){
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
}


*/