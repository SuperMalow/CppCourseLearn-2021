#include <iostream>
#include <string>

using namespace std;

class Complex
{
private:
    double real;
    double imag;
public:
    Complex(double r = 0.0, double i = 0.0):real(r),imag(i){}
    Complex operator+(const Complex &c2) const;
    Complex operator-(const Complex &c2) const;
    void ShowInfo() const;

};

Complex Complex::operator+(const Complex &c2) const
{
    return Complex(this->real + c2.real,this->imag + c2.imag);
}

Complex Complex::operator-(const Complex &c2) const
{
    return Complex(this->real - c2.real, this->imag - c2.imag);
}

void Complex::ShowInfo() const
{
    cout << "(" << this->real << "," << this->imag << ")" << endl;
}

void test()
{
    Complex c1(5,4);
    Complex c2(2,10);
    Complex c3;
    cout << "c1 = " ; c1.ShowInfo();
    cout << "c2 = " ; c2.ShowInfo();
    cout << "c3 = c1 - c2 = " ; (c3 = c1 - c2).ShowInfo();
    cout << "c3 = c1 + c2 = " ; (c3 = c1 + c2).ShowInfo();
}

int main()
{
    test();

    system("pause");
    return 0;
}