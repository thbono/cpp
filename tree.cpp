#include <iostream>

using namespace std;

int main()
{
    int n, i, j, x, s;

    cin >> n;

    for (i = 1; i <= n; i++)
    {
        x = 2 * i - 1;
        s = n - i;
        for (j = 1; j <= s; j++)
        {
            cout << " ";
        }
        for (j = 1; j <= x; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    s = (2 * n - 1) / 2;
    for (i = 1; i <= 2; i++)
    {
        for (j = 1; j <= s; j++)
        {
            cout << " ";
        }
        cout << "*" << endl;
    }

    return 0;
}