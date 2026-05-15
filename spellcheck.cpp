#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n, a;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cin >> s;
        sort(s.begin(),s.end());
        if (s=="Timru")
        {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }

    return 0;
}