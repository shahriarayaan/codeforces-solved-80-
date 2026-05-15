#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    int count=0;
    char c;
    cin >> n;
    vector<char> colors{};
    for ( int i = 0; i <n; i++)
    {
        cin >> c;
        colors.push_back(c);
    }
    for (int i = 0; i <n; i++)
    {
        if (int(colors[i]==colors[i+1]))
        {
            count++;
        } else{
            count = count;
        }
        
    }
    cout << count;

    return 0;
}