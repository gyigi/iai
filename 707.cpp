#include <iostream>
using namespace std;
int a, b, c;
int main()
{
    cin >> a >> b >> c;
    if (a * a + b * b == c * c || a * a + c * c == b * b || c * c + b * b == a * a)
        cout << "Right Triangle" << endl;
    else
        cout << "No" << endl;
    return 0;
}