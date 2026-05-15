#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    for (int i = 0; i <n; i++)
    {
        int counter=0;
        cin >> s;
        for (int j = 0; j < s.length()-1; j++)
        {
            if (s[j]==s[j+1])
            {
                counter++;
            }
            
        }
        if (counter>=1)
        {
            cout << 1 << endl;
        } else{
            cout << s.length() << endl;
        }
        
    }
    

    return 0;
}