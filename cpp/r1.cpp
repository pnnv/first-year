#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    bool prime = true;
    if(n <= 2) {
        return true;
    }

    for(int i = 2; i <= n/2; i++) {
        if(i%n == 0) {
            prime = false;
            break;
        }
    }

    return prime;
}


void addtovec(vector<char> vec, int x) {
    int tempi = x;
    vector<int> tempv;
    while(tempi >= 0) {
        tempv.push_back(tempi%10);
        tempi /= 10;
    } 
    
} 

int main() {

  int n;
  cin >> n;
  vector<char> charVec;
  charVec.push_back(2);
  int i = 3;
  while (charVec.size() <= (n + 5)) {
    bool prime = true;
    for (int j = 2; j <= i / 2; j++) {
      if (i % j == 0) {
        prime = false;
      }
    }

    if (prime) {
      
    }

    i += 2;
  }

  for (auto x : charVec) {
    cout << x;
  }
  cout << endl;

  cout << "size of charVec: " << charVec.size() << endl;
}