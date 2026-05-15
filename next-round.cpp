#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,k,p,q;
    int count =0;
    cin >> n >> k;

    vector<int> points;

    for (int i = 0; i < n; i++)
    {
        cin >> p;
        points.push_back(p);
    }

    q = points.at(k-1);

    for (int i = 0; i < n; i++)
    {
        if (points.at(i) >= q && points.at(i) > 0)
        {
            count++;
        }
    }

    cout << count;

    return 0;
}