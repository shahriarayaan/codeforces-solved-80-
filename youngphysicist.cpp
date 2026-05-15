#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, x;
    int sumX =0;
    int sumY =0;
    int sumZ=0;
    vector<int>vecs;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> x;
            vecs.push_back(x);
        }        
    }
    for (int j = 0; j < 3*n; j=j+3)
    {
        sumX = sumX + vecs[j];
    }
    for (int j = 1; j < 3*n; j=j+3)
    {
        sumY = sumY + vecs[j];
    }
    for (int j = 2; j < 3*n; j=j+3)
    {
        sumZ = sumZ + vecs[j];
    }
    if (sumX==0 && sumY==0 && sumZ==0)
    {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}