#include <iostream>
using namespace std;

int main(){
    int a,b,n,m;
    cin >> n;
    while (n--)
    {
        cin >> m;
        if (m%2==0)
        {
            cout << (m/2)-1<< endl;
        } else{
            cout << m/2 << endl;
        }
        
    }
    
    
    return 0;
}