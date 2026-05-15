#include <iostream>
using namespace std;

int main()
{
    int n,a,b,sec;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        cin >> a;
        cin >> b;
        a = a-1;
        sec = (a*b)+1;
        cout << sec << endl;
    }
    return 0;
}