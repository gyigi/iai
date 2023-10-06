#include <bits/stdc++.h>
using namespace std;
int a, b, c;
int main()
{
    cin >> a >> b >> c;
    if (a + b + c != 180)
        cout << "Error" << endl;
    else if (a == b && b == c)
        cout << "Equilateral" << endl;
    else if (a == 90 && b == c || b == 90 && a == c || c == 90 && b == a)
        cout << "Isosceles right" << endl;
    else if (a == b || b == c || a == c)
        cout << "Isosceles" << endl;
    else if (a == 90 || b == 90 || c == 90)
        cout << "Right" << endl;
    else
        cout << "Scalene" << endl;
    return 0;
}