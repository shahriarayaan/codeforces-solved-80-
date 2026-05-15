#include <iostream>
using namespace std;

int main()
{
    int n,a,nums,combination;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        cin >> a;
        for (int j = 0; j < a; j++)
        {
            cin >> nums;
        }
        combination = ((3*(10-a))*(9-a));
        cout << combination << endl;
    }
    return 0;
}