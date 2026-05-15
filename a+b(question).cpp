#include <iostream>
using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> s;
        char s1 = s[0];
        char s2 = s[2];
        int a = s1 - '0';
        int b = s2 - '0';
        cout << a+b << endl;
    }
    
    return 0;
}