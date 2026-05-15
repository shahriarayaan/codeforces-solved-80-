#include <iostream>
using namespace std;

int main()
{
    string s;
    int counter = 0;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (int(s[i])>=97 && int(s[i])<=122)
        {
            counter++;
        }
    }
    if (counter >= s.length()-counter)
    {
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = tolower(s[i]);
        }
        cout << s;
    } else{
        for (int i = 0; i < s.length(); i++)
        {
            s[i] = toupper(s[i]);
        }
        cout << s;
    }
    
    
    return 0;
}