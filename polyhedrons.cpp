#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int c;
    int side = 0;
    cin >> c;
    string s;
    vector<string>shape;
    vector<string>ssh = {"Cube","Tetrahedron","Octahedron","Icosahedron","Dodecahedron"};
    sort(ssh.begin(),ssh.end());
    vector<int>value = {6,12,20,8,4};
    for (int i = 0; i <c; i++)
    {
        cin >> s;
        shape.push_back(s);
    }
    sort(shape.begin(),shape.end());
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j <5; j++)
        {
            if (shape[i]==ssh[j])
            {
                side = side + value[j];
            }   
        }
    }
    cout << side;
    
    return 0;
}