#include <iostream>
using namespace std;

int main(){
    int i, a, b, c, sum, n;
    sum = 0;
    cin >>n;
    for (i = 0; i <n; i++)
    {
        cin >> a;
        cin >> b;
        cin >> c;
        if ((a+b+c)>1)
        {
            sum = sum +1;
        } else{
            sum = sum;
        }
        
    }
    cout << sum;
    return 0;
}