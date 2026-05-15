#include <iostream>
using namespace std;

int main()
{
    int n;
    string state,lock;
    cin >> n;
    cin >> state;
    cin >> lock;
    int counter = 0;
    for (int i = 0; i < n; i++)
    {
        if (state[i]>lock[i] && state[i]-lock[i]<=5)
        {
            counter += state[i]-lock[i];
        } else if(lock[i]>state[i] && lock[i]-state[i]<=5) 
        {
            counter += lock[i]-state[i];
        } else if (state[i]>lock[i] && state[i]-lock[i]>5)
        {
            counter += (lock[i]+10)-state[i];
        } else if (lock[i]>state[i] && lock[i]-state[i]>5)
        {
            counter += (state[i]+10)-lock[i];
        }
    }
    cout << counter;
    return 0;
}