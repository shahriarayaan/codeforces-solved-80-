#include <iostream>
using namespace std;

int main()
{
    int n,a;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        cin >> a;
        if ((a+1)%3==0 || (a-1)%3==0)
        {
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
        }           
    }
    return 0;
}