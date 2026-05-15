#include <iostream>
using namespace std;

int main(){
    int n;
    string w;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        cin >> w;
        if (w.length()>10)
        {
            cout << w[0]<<(w.length()-2)<<w.back();
        } else{
            cout << w;
        }
        cout << endl;
    }
    

    return 0;
}