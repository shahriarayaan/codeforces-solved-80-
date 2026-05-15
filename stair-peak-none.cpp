#include <iostream>
using namespace std;

int main()
{
    int n,a,b,c;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cin >> b;
        cin >> c;
        if (a<b && b<c)
        {
            cout << "STAIR" << endl;
        } else if (a<b && c<b )
        {
            cout << "PEAK" << endl;
        } else {
            cout << "NONE" << endl;
        } 
    }
    

    return 0;
}