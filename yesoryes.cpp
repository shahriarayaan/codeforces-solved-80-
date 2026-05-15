#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    string y;
    vector<string>s={"yes","yeS","yEs","Yes","YEs","YeS","yES","YES"};
    for (int i = 0; i < n; i++)
    {
        int counter = 0;
        cin >> y;
        for (int j = 0; j <8; j++)
        {
            if (y==s[j])
            {
                counter++;
            }
        }
        if (counter >= 1)
        {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
    return 0;
}