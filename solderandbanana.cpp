#include <iostream>
using namespace std;

int main(){
    int a,b,c,f,g;
    int d = 0;
    cin >> b;
    cin >> f;
    cin >> c;
    for ( a = 1; a <=c ; a++)
    {
        d += b*a;
    }

    g= f-d;
    if (g<0)
    {
        cout << ((-1)*g);
    } else{
        cout << 0;
    }
    
    
    return 0;
}