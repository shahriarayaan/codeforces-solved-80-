#include <iostream>
using namespace std;

int main()
{
    int cities, capcity;
    cin >> cities >> capcity;

    if (capcity >= cities - 1)
    {
        cout << cities - 1;
        return 0;
    }

    int counter = 0;

    for (int i = 0; i < (cities - capcity); i++)
    {
        if (i == 0)
        {
            counter = counter + capcity;
        }
        else
        {
            counter = counter + i + 1;
        }
    }

    cout << counter;

    return 0;
}