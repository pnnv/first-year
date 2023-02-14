/* *** Subset generation using recursion and backtracking */
#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> subsets;

void generate(vector<int> &subset, int i, vector<int> nums)
{
    // base condition
    if(i == nums.size())
    {
        subsets.push_back(subset);
        return;
    }
    // ith element not in subset. i.e. subset is empty (atleast for the first call)
    generate(subset, i+1, nums);

    // ith element is in the subset
    subset.push_back(nums[i]);
    generate(subset, i+1, nums);
    subset.pop_back();
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums;
    for(int k = 0; k < n; k++)
    {
        int temp;
        cin >> temp;
        nums.push_back(temp);
    }
    vector<int> empty;
    generate(empty, 0, nums);
    sort(subsets.begin(), subsets.end());

    for(auto subset: subsets)
    {
        for(auto element: subset)
        {
            cout << element << " ";
        }
        cout << endl;
    }

} 