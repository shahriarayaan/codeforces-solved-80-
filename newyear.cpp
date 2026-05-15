#include <iostream>
using namespace std;

int main()
{
    int n,a,total;
    int counter = 0;
    int time = 0;
    cin >> n;
    cin >> a;
    total = 240-a;
    for (int i = 1; i <=n; i++)
    {
        time = time + (5*i);
        if (time <= total)
        {
            counter++;
        }
    }
    cout << counter;

    return 0;
}