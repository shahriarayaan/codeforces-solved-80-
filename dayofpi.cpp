#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string pi = "314159265358979323846264338327";
    string s;
    for (int i = 0; i <n; i++)
    {
        int counter =0;
        cin >> s;
        for (int j = 0; j < pi.length(); j++)
        {
            if (s[j]==pi[j])
            {
                counter++;
            } else{
                break;
            }
        }
        cout << counter << endl;   
    }
    return 0;
}