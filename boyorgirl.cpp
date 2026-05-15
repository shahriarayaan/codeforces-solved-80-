#include <iostream>
#include <vector>
using namespace std;

int main(){
    string s;
    cin >> s;
    int count =0;
    for (int i = 0; i < s.length(); i++)
    {
        int min_index=i;
        for (int j = i+1; j < s.length(); j++)
        {
            if (s[min_index]>s[j])
            {
                min_index = j;
            }
            
        }
        if (min_index != i)
        {
            swap(s[i],s[min_index]);
        }
        
    }
    
for (int i = 0; i < s.length()-1; i++)
{
    if (s[i]!=s[i+1])
    {
        count++;
    }
}
count++;
    if (count%2==0)
    {
        cout << "CHAT WITH HER!";
    } else {
        cout << "IGNORE HIM!";
    }
    
    
    return 0;
}