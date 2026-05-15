#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int n;
    string a,b;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        cin >> a >> b;
        swap(a[0],b[0]);
        cout << a << " " << b << endl;        
    }
    return 0;
}