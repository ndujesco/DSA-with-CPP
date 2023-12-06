#include <iostream>

using namespace std;

class Fraction
{
    int numerator;
    int denominator;

public:
    Fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
    }

    void print()
    {
        cout << numerator << "/" << denominator << endl;
    }

    void add(Fraction f2)
    {
        int lcm = this->lcm(denominator, f2.denominator);
        numerator = (lcm / denominator) * numerator + (lcm / f2.denominator) * f2.numerator; // we are sure that lcm/denominator will give a whole number
        denominator = lcm;
    }

private:
    int gcd(int a, int b)
    {
        int lesser = a;
        int gcd = 1;

        if (b < a)
        {
            lesser = b;
        }

        for (int i = 1; i < lesser; i++)
            if (a % i == 0 && b % i == 0)
            {
                gcd = i;
            }

        return gcd;
    }

    int lcm(int a, int b)
    {
        return (a * b) / this->gcd(a, b);
    }
};

int main()
{
    // Fraction f1(1, 3);
    // Fraction f2(2, 5);
    // f1.add(f2);

    // f1.print();
}