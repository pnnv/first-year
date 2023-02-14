#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<string> sets;
    void generate(string &set, int a, int b)
    {
        if(a == 0 && b == 0)
        {
            sets.push_back(set);
            return;
        }
        if(a > 0) set.push_back('(');
        generate(set, a-1, b);
        set.pop_back();

        if(b > 0 && a < b) set.push_back(')');
        generate(set, a, b-1);
        set.pop_back();
    }
    vector<string> generateParenthesis(int n) {
        string temp;
        generate(temp, n, n);
        return sets;
    }
};

int main()
{
    return 0;
}