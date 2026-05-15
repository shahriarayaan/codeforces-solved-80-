#include <iostream>
using namespace std;

int main()
{
    int n;
    string a,b;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        cin >> a;
        int sz = a.length();
        for (int j = 0; j < sz; j = j+2)
        {
            cout << a[j] ;
        }
        cout << a[a.length()-1] <<endl;
    }
    return 0;
}