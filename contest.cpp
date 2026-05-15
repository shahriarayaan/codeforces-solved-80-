#include <iostream>
using namespace std;

int main()
{
    int n,a,b;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        cin >> a;
        cin >> b;
        if (a%2==0||b%2==0)
        {
            cout << "YES" <<endl;
        } else {
            cout << "NO" <<endl;
        }   
    }
    return 0;
}