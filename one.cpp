#include <iostream>

using namespace std;

int main()
{
    float a, b, r;

    cout << "Digite a largura: ";
    cin >> a;

    cout << "Digite o comprimento: ";
    cin >> b;

    r = a * b;

    printf("Area: %.2f\n", r);

    return 0;
}