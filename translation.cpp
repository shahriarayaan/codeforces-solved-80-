#include <iostream>
using namespace std;

int main(){
    string n1, n2;
    cin >> n1 >> n2;

    if (n1.length() != n2.length()){
        cout << "NO";
        return 0;
    }

    int sz = n1.length();

    for (int i = 0; i < sz; i++)
    {
        if (n1[i] != n2[sz - 1 - i])
        {
            cout << "NO";
            return 0;
        }
    }

    cout << "YES";
    return 0;
}