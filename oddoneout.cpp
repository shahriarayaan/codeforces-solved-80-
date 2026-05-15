#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n,t;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        vector<int>nums;
        for (int j = 0; j <3; j++)
        {
            cin >> t;
            nums.push_back(t);
        }
        sort(nums.begin(),nums.end());
        for (int j = 0; j < 2; j++)
        {
            if (nums[j]==nums[j+1])
            {
                nums[j]=0;
                nums[j+1]=0;
            }
        }
        sort(nums.begin(),nums.end());
        cout << nums[2] << endl;
    }
    

    return 0;
}