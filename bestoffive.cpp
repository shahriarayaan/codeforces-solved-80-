#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int counter = 0;
        cin >> s;
        for (int j = 0; j <5; j++)
        {
            if (s[j]=='A')
            {
                counter++;
            }
            
        }
        if (counter > 2)
        {
            cout << 'A' << endl;
        } else{
            cout << 'B' << endl;
        }
        
        
    }
    
    return 0;
}