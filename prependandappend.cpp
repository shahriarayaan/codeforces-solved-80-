#include <iostream>
using namespace std;

int main()
{
    int n,a;
    string b;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        cin >> a;
        cin >> b;
        int s = b.length();
        int left = 0;
        int right = a-1;
        for (int j = 0; j <a; j++)
        {
            if (left>=right)
            {
                break;
            }
            
            if (b[left]!=b[right])
            {
                left++;
                right--;
            } else{
                break;
            }
        }
        cout << right-left+1 << endl;
    }
    return 0;
}