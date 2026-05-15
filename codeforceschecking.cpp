#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >> n;
    char s;
    vector<char>check{'c','o','d','e','f','r','s'};
    for (int i = 0; i <n; i++)
    {
        int counter = 0;
        cin >> s;
        for (int j = 0; j <7; j++)
        {
            if (check[j]==s)
            {
                counter++;
            }
        }
        if (counter==1)
        {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
}