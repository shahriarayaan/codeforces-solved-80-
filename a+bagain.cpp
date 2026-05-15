#include <iostream>
using namespace std;

int main(){
    int n,a,b,c,d;
    cin >> n;
    for ( int i = 0; i <n; i++)
    {
        cin >> a;
        b = a%10;
        c = a/10;
        d = b+c;
        cout << d;
        cout << endl;
    }
    
    
    
    return 0;
}