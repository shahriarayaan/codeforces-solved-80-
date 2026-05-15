#include <iostream>
using namespace std;

int main()
{
    int n,size;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int counter = 0;
        cin >> size;
        cin >> s;
        for (int j = 0; j < size; j++)
        {
            if (s[j]=='(')
            {
                counter++;
            }
        }
        if (size%2==0 && counter==(size/2))
        {
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
        
    }
    
    return 0;
}