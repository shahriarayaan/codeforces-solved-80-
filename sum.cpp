#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n,a;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        vector<int>nums;
        for (int j = 0; j< 3; j++)
        {
            cin >> a;
            nums.push_back(a);
        }
        sort(nums.begin(),nums.end());
        if (nums[0]+nums[1]==nums[2])
        {
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
    }
    return 0;
}