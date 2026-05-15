#include <iostream>
using namespace std;

int main()
{
    string p,I;
    int counter = 1;
    int pointer = 0;
    cin >> p >> I;
    for (int i = 0; i < I.length(); i++)
    {
        if (p[pointer]==I[i])
        {
            counter++;
            pointer++;
        } else {
            pointer=pointer;
        }
    }
    cout << counter;
    return 0;
}