#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    string num;
    cin >> num;
    int counter = 0;
    for (int i = 0; i <num.length(); i++)
    {
        if (num[i]=='4' || num[i]=='7' )
        {
           counter++;
        }
        
    }
    if (counter == 4 || counter == 7)
    {
        cout << "YES";
    } else{
        cout << "NO";
    }
    cout <<endl;
    return 0;
}