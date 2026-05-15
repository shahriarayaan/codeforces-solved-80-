#include <iostream>
using namespace std;

int main()
{
    int students, notebook, pens;
    cin >> students;
    cin >> notebook;
    cin >> pens;
    if (pens>=students && notebook>=students)
    {
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
    

    return 0;
}