#include <iostream>
using namespace std;

int main(){
    long long a,b,t,i;
    cin >> t;
    for (i = 0; i <t; i++)
    {
        cin >> a;
        cin >> b;
        cout << ((b - a % b) % b) << endl;
        
    }

    return 0;
}