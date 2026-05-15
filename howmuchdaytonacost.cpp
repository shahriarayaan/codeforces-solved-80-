#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int n,a,b,c;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        int counter = 0;
        vector<int>nums;
        cin >> a;
        cin >> b;
        for (int j = 0; j < a; j++)
        {
            cin >> c;
            nums.push_back(c);
        }
        for (int j = 0; j < a; j++)
        {
            if (nums[j]==b)
            {
                counter++;
            }
        }
        if (counter>=1)
        {
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
        
    }
    

    return 0;
}