#include <iostream>

using namespace std;

int main()
{
    int t, g, m;

    cin >> t;

    g = t / 3600;
    t = t - (g * 3600);

    m = t / 60;
    t = t - (m * 60);

    printf("%dg%dm%ds\n", g, m, t);

    return 0;
}