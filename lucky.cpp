#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s;
    for (int i = 0; i <n; i++)
    {
        int sum2 = 0;
        int sum1 = 0;
        cin >> s;
        for (int j = 0; j <3 ; j++)
        {
            sum1 = sum1 + s[j];
        }
        for ( int j = 3; j <6; j++)
        {
            sum2 = sum2 + s[j];
        }
        if (sum1==sum2)
        {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
    
    return 0;
}