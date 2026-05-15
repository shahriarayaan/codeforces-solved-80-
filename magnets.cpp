#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int n,s;
    int counter = 1;
    cin >> n;
    vector<int>magnets;
    for (int i = 0; i <n; i++)
    {
        cin >> s;
        magnets.push_back(s);
    }
    for (int i = 1; i <n ; i++)
    {
        if (magnets[i]!=magnets[i-1])
        {
            counter++;
        }
    }
    cout << counter;
    return 0;
}