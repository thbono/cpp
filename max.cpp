#include <iostream>

using namespace std;

int main()
{
    int a, b, max;

    cout << "Enter two numbers: ";
    cin >> a;
    cin >> b;

    if (a > b)
    {
        max = a;
    }
    else
    {
        max = b;
    }

    cout << "Max: " << max << endl;

    return 0;
}