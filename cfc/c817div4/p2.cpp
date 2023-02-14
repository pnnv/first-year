#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string c1, c2;
    cin >> c1 >> c2;

    bool flag = true;

    for(int i = 0; i < n; i++) {
        if(c1[i] != c2[i]) {
            if(c1[i] == 'R' || c2[i] == 'R') {
                flag = false;
                break;
            }
        }
    }

    if(flag) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
} 

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}