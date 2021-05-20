#include <iostream>
using namespace std;

/*
        �ó�����Ϊ�˽��FFT������

        1.ʵ�ָ�����
        2.

*/

class Complex
{
private:
    double real;
    double imag;
public:
    //Complex�ĳ�ʼ�� ʵ�� �鲿
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
//��(r,i)����ʽ���
void Complex::ShowInfo() const
{
    cout << "(" << this->real << "," << this->imag << ")" << endl;
}






int mian()
{

    system("pause");
    return 0;
}