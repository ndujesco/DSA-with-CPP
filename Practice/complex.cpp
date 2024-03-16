#include <iostream>

#include <cmath>
#include <complex>

using namespace std;

struct ComplexRoots
{
    complex<float> root1;
    complex<float> root2;
};

int main()
{
    ComplexRoots roots;
    roots.root1 = sqrt(complex<float>(-44));
    cout << round(roots.root1.imag() * 1000000) / 1000000 << endl;
    return 0;
}
