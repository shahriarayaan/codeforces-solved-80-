#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int x;
    vector<int>nums;
    for (int i = 0; i <4; i++)
    {
        cin >> x;
        nums.push_back(x);
    }
    sort(nums.begin(),nums.end());
    for (int i = 0; i <3; i++)
    {
        cout << nums[3]-nums[i] << " ";
    }
    return 0;
}