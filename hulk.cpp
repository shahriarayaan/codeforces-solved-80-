#include <iostream>
using namespace std;

int main(){
    string a = "I hate";
    string b = "I love";
    string feelings = "";
    int n;
    cin >> n;
    for (int i = 1; i <=n; i++)
    {
     if (i==1)
     {
        feelings = feelings + a ;
     } else if (i%2==0)
     {
        feelings = feelings +" that " + b ;
     } else {
        feelings = feelings +" that "+ a;
     }
    }
    feelings = feelings + " it";
    cout << feelings;
    return 0;
}