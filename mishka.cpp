#include <iostream>
using namespace std;

int main()
{
    int n,a,b;
    int counter = 0;
    int counter1 = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cin >> b;
        if (a>b)
        {
            counter++;
        } 
        if (b>a)
        {
            counter1++;
        }
        if (a==b)
        {
            counter1++;
            counter++;
        }
    }
    if (counter==counter1)
    {
        cout << "Friendship is magic!^^";
    } else if (counter > counter1)
    {
        cout << "Mishka";
    } else {
        cout << "Chris";
    }
    return 0;
}