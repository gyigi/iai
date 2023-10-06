#include <iostream>
using namespace std;
int a, b, c, d;
int main()
{
    cin >> a >> b >> c >> d;
    int cnt = 0;
    if (a >= 90)
        cnt++;
    if (b >= 90)
        cnt++;
    if (c >= 90)
        cnt++;
    if (cnt >= 2 && d >= 85)
        cout << "Qualified" << endl;
    else
        cout << "Not qualified" << endl;
    return 0;
}