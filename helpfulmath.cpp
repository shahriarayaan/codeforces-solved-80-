#include <iostream>
#include <vector>
using namespace std;

int main(){
    string math; 
    cin >> math;
    for (int i = 0; i <math.length(); i+=2)
    {
        int min_index=i;
        for (int j = i+2;  j<math.length() ; j+=2)
        {
            if (math[min_index] > math[j])
            {
                min_index = j;
            }
            
        }
        if (min_index !=i)
        {
            swap(math[i],math[min_index]);
        }
        
        
    }
    cout << math;
    

    return 0;
}