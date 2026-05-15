#include <iostream>
#include <vector>
using namespace std;

int main(){
    string first,second; 
    cin >> first;
    cin >> second;
    for (int i = 0; i <first.length(); i++)
    {
        if (first[i]>='A'&&first[i]<='Z')
        {
            first[i] +=32;
        }
                if (second[i]>='A'&&second[i]<='Z')
        {
            second[i] +=32;
        }
        if (first[i]>second[i])
        {
            cout << 1;
            return 0;
        } else if (second[i] > first[i])
        {
            cout << -1;
            return 0;
        } 
    }
    cout<<0;
    return 0;
}