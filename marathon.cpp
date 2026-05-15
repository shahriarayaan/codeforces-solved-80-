#include <iostream>
using namespace std;

int main(){
    int a,b,c,d,n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int counter = 0;
        cin >> a >> b >> c >> d;
        if (a<b)
        {
            counter++;
        }
        if (a<c)
        {
            counter++;
        } 
        if (a<d)
        {
            counter++;
        }
        cout << counter << endl;
    }
    return 0;
}