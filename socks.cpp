#include <iostream>
using namespace std;

int main(){
    int a,b;
    cin >> a >> b;
    if ((a+b)%2==0)
    {
        if (a>b)
        {
            cout << b << " "<< (((a+b)/2)-b);
        } else {
            cout << a << " "<< (((a+b)/2)-a);
        }
    } else{
        if (a>b)
        {
            cout << b<< " "<< ((a-b)/2);
        } else{
            cout << a<< " "<< ((b-a)/2);
        }
        
    }
    
    
    return 0;
}