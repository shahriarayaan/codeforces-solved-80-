#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int k,r;
    int counter = 1;
    cin >> k >> r;
    for (int i = 0; i < INFINITY; i++)
    {
        int sum = k*counter;
        if (sum%10==0)
        {
            cout << counter;
            break;
        } else if (sum%10==r)
        {
            cout << counter;
            break;
        } else{
            counter++;
        }   
    }
    return 0;
}