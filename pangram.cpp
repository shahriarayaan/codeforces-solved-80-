#include <iostream>
using namespace std;

int main(){
        int n;
    cin >> n;
    string word;
    cin >> word;
    if (n<26)
    {
        cout << "NO";
        return 0;
    }
    
    for (int i = 0; i < word.length(); i++)
    {
        if (word[i]<=90)
        {
            word[i]= char(word[i]+32);
        }
        
    }
    
    for (int i = 0; i < word.length(); i++)
    {
       int min_index = i;
       for ( int j = i+1; j < word.length(); j++)
       {
            if (word[min_index] > word[j])
            {
                min_index = j;
            }
            
       }
       if (min_index!=i)
       {
            swap(word[i],word[min_index]);
       }
       
    }
    int count =0;
    for (int i = 0; i < word.length()-1; i++)
    {
        if (word[i]==word[i+1])
        {
            count++;
        }
        
    }
    if ((n-count)>=26)
    {
        cout << "YES";
    } else{
        cout << "NO";
    }
    
    
    
    return 0;
}