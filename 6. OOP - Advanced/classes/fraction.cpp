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

    void print() const
    {
        cout << numerator << "/" << denominator << endl;
    }

    Fraction operator+(Fraction const &f2) const
    {
        int lcm = this->lcm(denominator, f2.denominator);
        int num = (lcm / denominator) * numerator + (lcm / f2.denominator) * f2.numerator; // we are sure that lcm/denominator will give a whole number

        Fraction fnew(num, lcm);
        fnew.simplify();
        return fnew;
    }

    Fraction operator-(Fraction const &f2) const
    {
        int lcm = this->lcm(denominator, f2.denominator);
        int num = (lcm / denominator) * numerator - (lcm / f2.denominator) * f2.numerator; // we are sure that lcm/denominator will give a whole number

        Fraction fnew(num, lcm);
        fnew.simplify();
        return fnew;
    }

    Fraction operator*(Fraction const &f2) const
    {
        int num = numerator * f2.numerator;
        int denom = denominator * f2.denominator;

        Fraction fnew(num, denom);
        fnew.simplify();
        return fnew;
    }

    Fraction &operator++()
    {
        numerator = numerator + denominator;
        simplify();

        return *this;
    }

    Fraction operator++(int)
    {
        Fraction fnew(numerator, denominator);
        numerator = numerator + denominator;
        simplify();
        fnew.simplify();

        return fnew;
    }

    bool operator==(Fraction const &f2) const
    {
        const int gcd1 = this->gcd(numerator, denominator);
        const int num1 = numerator / gcd1;
        const int denom1 = denominator / gcd1;

        const int gcd2 = this->gcd(f2.numerator, f2.denominator);
        const int num2 = f2.numerator / gcd2;
        const int denom2 = f2.denominator / gcd2;

        if (num1 == num2 && denom1 == denom2)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void simplify()
    {
        int gcd = this->gcd(numerator, denominator);

        numerator = numerator / gcd;
        denominator = denominator / gcd;
    }

private:
    int gcd(int a, int b) const
    {
        int lesser = a;
        int gcd = 1;

        if (b < a)
        {
            lesser = b;
        }

        for (int i = 1; i <= lesser; i++)
            if (a % i == 0 && b % i == 0)
            {
                gcd = i;
            }

        return gcd;
    }

    int lcm(int a, int b) const
    {
        return (a * b) / this->gcd(a, b);
    }
};
