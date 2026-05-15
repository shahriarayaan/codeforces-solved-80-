#include <iostream>
using namespace std;

int main()
{
    string p="codeforces";
    string o;
    int n;
    cin >> n;
    int sz = p.length();
    for (int i = 0; i < n; i++)
    {
        int counter = 0;
        cin >> o;
        for (int j = 0; j < sz; j++)
        {
            if (p[j]!=o[j])
            {
                counter++;
            }
            
        }
        cout << counter << endl;
    }
    
    return 0;
}