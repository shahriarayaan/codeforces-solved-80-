#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,r;
    cin >> n;
    vector<int>ratings;
    for (int i = 0; i <n; i++)
    {
        cin >> r;
        ratings.push_back(r);
    }
    for (int i = 0; i <n; i++)
    {
        if (ratings[i]<=1399)
        {
            cout << "Division 4" << endl;
        } else if (ratings[i]>=1400 && ratings[i]<=1599)
        {
            cout << "Division 3" << endl;
        } else if (ratings[i]>=1600 && ratings[i]<=1899)
        {
            cout << "Division 2" << endl;
        } else if (ratings[i]>=1900)
        {
            cout << "Division 1" << endl;
        }
    }
    return 0;
}