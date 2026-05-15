#include <iostream>
using namespace std;

int main(){
    string w;
    cin >> w;
    if (w[0]>=97 && w[0]<=122)
    {
        w[0] = char(w[0]-32);
        cout << w;
    } else {
        cout << w;
    }
    return 0;
}