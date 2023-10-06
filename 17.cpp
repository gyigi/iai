#include <iostream>
using namespace std;
int n;
int main()
{
    cin >> n;
    if (n % 5 > 0 && n % 5 <= 3)
        cout << "Fishing" << endl;
    else
        cout << "Lying" << endl;
    return 0;
}