#include <iostream>
using namespace std;
int a, b, c;
int main()
{
    cin >> a >> b >> c;
    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "Valid" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }
    return 0;
}