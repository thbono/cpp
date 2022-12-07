#include <iostream>

#ifdef _WIN32
#include <Windows.h>
#else
#include <unistd.h>
#endif

using namespace std;

int main()
{
    int i;

    for (i = 1; i <= 15; i++)
    {
        cout << "\r" << i;
        flush(cout);
        sleep(1);
    }

    cout << "\r" << "Sto lat" << endl;

    return 0;
}
