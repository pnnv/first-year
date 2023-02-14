#include <bits/stdc++.h>
using namespace std;

int binExpItr(int a, int b) {
    int ans = 1;
    while(b) {
        if(b&1) {
            ans = ans * a;
        }
        a = a * a;
        b >>= 1;
    } 
    return ans;
}

int main() {
    for(int i = 0; i < 30; i++) {
        cout << binExpItr(2, i) << endl;
    }
}
