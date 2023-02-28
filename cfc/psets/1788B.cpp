#include <bits/stdc++.h>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

void solve() {
    int n, x;
    cin >> n >> x;
    string ans;
    bool f = true;
    
    if(abs(x) > n + 1) {
        cout << -1 << endl;
        f = false;
    } else {
        if(x > 0) {
            for(int j = 0; j < x-1; j++) {
                ans.push_back('+');
            }
            for(int j = 0; j < n - ans.length(); j++) {
                ans.push_back('*');
            }
        } else if(x < 0) {
            for(int j = 0; j < abs(x)+1; j++) {
                ans.push_back('-');
            }
            for(int j = 0; j < n - ans.length(); j++) {
                ans.push_back('*');
            }
        } else{
            if(n&1) {
                cout << -1 << endl;
                f = false;
            } else {
                for(int j = 0; j < n/2; j++) {
                    ans.push_back('+');
                    ans.push_back('-');
                }
            }
        }
    }
    
    if(f) {
        cout << ans << endl;
    }
}

int main() {
	int t;
	cin >> t;
	while(t--) {
	    solve();
	}
	return 0;
}
