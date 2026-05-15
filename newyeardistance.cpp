#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int a;
    int distance = 0;
    int sum = 0;
    int avg = 0;
    vector<int>cords;
    for (int i = 0; i <3; i++)
    {
        cin >> a;
        cords.push_back(a);
    }
    sort(cords.begin(),cords.end());
    distance = abs(cords[1]-cords[0])+abs(cords[2]-cords[1]);
    cout << distance;
    
    return 0;
}