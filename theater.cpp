#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long double n, m, a, mm, nn, tiles;

    cin >> n >> m >> a;

    mm = ceil(m / (double)a);
    nn = ceil(n / (double)a);

    tiles = mm * nn;

    cout << (long long)tiles;
    return 0;
}