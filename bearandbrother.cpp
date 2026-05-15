#include <iostream>
#include<cmath>
using namespace std;

int main(){
    int bob,lamark, i;
    cin >> lamark;
    cin >> bob;
    
    for ( i = 1; i <INFINITY; i++)
    {
        bob = bob*2;
        lamark = lamark *3;
        if (lamark >bob )
        {
            cout << i;
            break;
        }
        
    }
    
    
    return 0;
}