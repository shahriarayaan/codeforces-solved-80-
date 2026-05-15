#include <iostream>
using namespace std;

int main()
{
    string s;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;

        int counter = 0;
        int posR = 0, posr = 0;
        int posG = 0, posg = 0;
        int posB = 0, posb = 0;

        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'r')
            {
                posr = i;
            }
            else if (s[i] == 'R')
            {
                posR = i;
            }

            else if (s[i] == 'g')
            {
                posg = i;
            }
            else if (s[i] == 'G')
            {
                posG = i;
            }

            else if (s[i] == 'b')
            {
                posb = i;
            }
            else if (s[i] == 'B')
            {
                posB = i;
            }
        }

        if (posr < posR)
        {
            counter++;
        }

        if (posg < posG)
        {
            counter++;
        }

        if (posb < posB)
        {
            counter++;
        }

        if (counter == 3)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}