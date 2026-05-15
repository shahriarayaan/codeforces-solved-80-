#include <iostream>
using namespace std;

int main(){
    int n,score;
    int counter = 0;
    cin >> n;
    for (int i = 0; i <n; i++)
    {
        cin >> score;
        if (score >=1)
        {
            counter++;
        }
        
    }
    if (counter>=1)
    {
        cout << "HARD";
    } else{
        cout << "EASY";
    }
    
    
    return 0;
}