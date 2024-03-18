#include <iostream>
#include <iomanip>

using namespace std;

class Complex
{

    float real;
    float imaginary;

    double getArgument()
    {
        /* Ranges from 0 to 360 */
        double const arctan = this->reinmannSum(imaginary / real) * (180 / M_PI);

        if (arctan > 0)
        {
            if (real > 0 && imaginary > 0)
            {
                return arctan;
            }
            return 180 + arctan;
        }
        else
        {
            if (real < 0 && imaginary > 0)
            {
                return 180 - arctan;
            }
            return 360 - arctan;
        }
    }

    double integrand(double variable)
    {
        return 1 / (1 + pow(variable, 2));
    }

    double reinmannSum(double x)
    {
        /*
            This uses the fact that arctan(x) is the integral from 0 to x of 1/(1 + u^2).
            Find the reinmann sum using a large value of n (midpoint rule)
        */

        int const n = 1000;

        double delta_x = x / n;
        double totalHeight = 0;

        for (int i = 0; i < n; i++)
        {
            totalHeight += integrand(delta_x * (i + 0.5));
        }
        return (totalHeight * delta_x);
    }

public:
    Complex()
    {
        real = 0;
        imaginary = 0;
    }

    Complex(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }

    void setNumber(int real, int imaginary)
    {
        this->real = real;
        this->imaginary = imaginary;
    }
    void add(Complex const &c2)
    {
        real = real + c2.real;
        imaginary = imaginary + c2.imaginary;
    }

    void multiply(Complex const &c2)
    {
        float product_real = real * c2.real - imaginary * c2.imaginary;
        float product_imaginary = real * c2.imaginary + c2.real * imaginary;

        real = product_real;
        imaginary = product_imaginary;
    }

    void print()
    {
        cout << endl;
        char real_sign_display;
        char im_sign_display;

        if (real > 0)
        {
            real_sign_display = '+';
        }
        else
        {
            real_sign_display = '-';
        }

        if (imaginary > 0)
        {
            im_sign_display = '\0';
        }
        else
        {
            im_sign_display = '-';
        }
        cout << "Number: " << real_sign_display << abs(real) << im_sign_display << abs(imaginary) << "i" << endl;
        cout << "Magnitude: " << sqrt(pow(real, 2) + pow(imaginary, 2)) << endl;
        cout << "Argument: " << getArgument() << "\u00B0" << endl
             << endl;
    }
};

int main()
{
    Complex c1(3, 5);
    Complex c2(-8, -10);

    c1.add(c2);
    c1.print();

    return 0;
}