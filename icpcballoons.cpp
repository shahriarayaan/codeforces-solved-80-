#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int t,n,ball;
    string s;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int counter = 0;
        cin >> n;
        cin >> s;
        sort(s.begin(),s.end());
        for (int j = 0; j < n-1; j++)
        {
            if (s[j]==s[j+1])
            {
                counter++;
            }
            
        }
        ball = (n*2)-counter;
        cout << ball <<endl;    
    }
    return 0;
}