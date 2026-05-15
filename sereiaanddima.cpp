#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, a;
    char x;
    int tFirst = 0;
    int tSecond = 0;
    vector<int> values;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        values.push_back(a);
    }
    int left = 0;
    int right = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (i == 0 || i % 2 == 0)
        {
            if (values[left] > values[right])
            {
                tFirst = tFirst + values[left];
                left++;
            }
            else
            {
                tFirst = tFirst + values[right];
                right--;
            }
        }
        else
        {
            if (values[left] > values[right])
            {
                tSecond = tSecond + values[left];
                left++;
            }
            else
            {
                tSecond = tSecond + values[right];
                right--;
            }
        }
    }
    cout << tFirst << " " << tSecond<< endl;

    return 0;
}