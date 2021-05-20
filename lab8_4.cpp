#include <iostream>
using namespace std;

/*
        该程序是为了解决FFT的问题

        1.实现复数类
        2.

*/

class Complex
{
private:
    double real;
    double imag;
public:
    //Complex的初始化 实部 虚部
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
//以(r,i)的形式输出
void Complex::ShowInfo() const
{
    cout << "(" << this->real << "," << this->imag << ")" << endl;
}






int mian()
{

    system("pause");
    return 0;
}