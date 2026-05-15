#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,height,fence;
    vector<int>heights;
    int counter = 0;
    cin >> n;
    cin >> fence;
    for ( int i = 0; i <n; i++)
    {
        cin >> height;
        heights.push_back(height);
    }
    
    for (int i = 0; i <n; i++)
    {
        if (heights[i] > fence)
        {
            counter = counter + 2;
        } else {
             counter++;
        }
        
    }
    cout << counter;
    return 0;
}