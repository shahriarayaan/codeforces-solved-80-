#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int c;
    int counter = 0;
    vector<int>colors;
    for (int i = 0; i <4; i++)
    {
        cin >> c;
        colors.push_back(c);
    }
    sort(colors.begin(),colors.end());
    for (int i = 0; i < 3; i++)
    {
        if (colors[i]==colors[i+1])
        {
            counter++;
        }
        
    }
    cout << counter;

return 0;
}