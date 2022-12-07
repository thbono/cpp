#include <iostream>

using namespace std;

int main()
{
    int a, b, i, nwd;

    cout << "Enter two numbers: ";
    cin >> a;
    cin >> b;

    for (i = 1; i <= a && i <= b; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            nwd = i;
        }
    }

    cout << "NWD: " << nwd << endl;

    return 0;
}