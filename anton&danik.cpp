#include <iostream>
using namespace std;

int main(){
    char x;
    int n, asci;
    int countA = 0;
    int countD = 0;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        cin >> x;
        asci = int(x);
        if (asci==65)
        {
            countA++;
        } else {
            countD++;
        }
        
    }
    if (countA > countD)
    {
        cout << "Anton";
    } else if (countD > countA)
    {
        cout << "Danik";
    } else{
        cout << "Friendship";
    }
    
    
    
    return 0;
}