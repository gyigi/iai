#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a >= b && a >= c)
        cout << a - b + a - c;
    else if (b >= a && b >= c)
        cout << b - a + b - c;
    else if (c >= a && c >= b)
        cout << c - a + c - b;
}