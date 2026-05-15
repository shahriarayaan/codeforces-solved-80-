#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,a;
    cin >> n;
    vector<int>nums;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        nums.push_back(a);
    }
    sort(nums.begin(),nums.end());
    int sum = 0;
    for (int i = 0; i <n; i++)
    {
        sum = sum + (nums[n-1]-nums[i]);
    }
    cout << sum;

    return 0;
}