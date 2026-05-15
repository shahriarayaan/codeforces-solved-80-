#include <iostream>
#include <vector>
using namespace std;
int main(){
    float n,v;
    float total = 0;
    float avg = 0;
    cin >>n;
    vector<int>volume;
    for (int i = 0; i <n; i++)
    {
        cin >> v;
        volume.push_back(v);
    }
    for (int i = 0; i < n; i++)
    {
        total = total + volume[i];
    }
    avg = total/n;
    cout << avg;

return 0;
}