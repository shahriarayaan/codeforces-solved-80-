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
        cout << nums[1] << endl;
    }
    
    

    return 0;
}