#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int stops, exit, enter;
    int in = 0;
    vector<int>passenger;
    cin >> stops;
    for (int i = 0; i < stops; i++)
    {
        cin >> exit;
        cin >> enter;
        in = in + (enter - exit);
        passenger.push_back(in);
    }
    sort(passenger.begin(),passenger.end());
    cout << passenger.at(stops-1);
    
    return 0;
}