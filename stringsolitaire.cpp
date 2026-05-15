#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        int countA = 0;
        int countB = 0;
        int countC = 0;
        for (int j = 0; j < s.length(); j++)
        {
            if (s[j] == 'A')
            {
                countA++;
            }
            else if (s[j] == 'B')
            {
                countB++;
            }
            else
            {
                countC++;
            }
        }
        if (countB - countA == countC)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}