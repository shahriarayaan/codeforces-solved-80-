#include <iostream>
using namespace std;

int main(){
    int n,p,q,sub;
    int counter = 0;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        cin >> p >> q;
        sub = q-p;
        if (sub >=2)
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}