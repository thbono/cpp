#include <iostream>

using namespace std;

int main()
{
    int a, b, c, o, p;

    cin >> a;
    cin >> b;
    cin >> c;

    o = a * b * c;
    p = 2 * a * b + 2 * b * c + 2 * a * c;

    cout << o << endl;
    cout << p << endl;

    return 0;
}