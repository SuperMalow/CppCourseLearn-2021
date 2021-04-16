#include <iostream>
#include <string>
#include <math.h>
using namespace std;
/*
4/16 ���ռ�д�˼�������ʽ��
items:
1.���ӻ�����
2.������ֵ֪ �����������ֵ
3.��ѡ��λ

*/

class HighFrequency
{
private:
    /* data */
    double _resonFrequency, _L, _C, _Rp, _r;
    double PI;

public:
    HighFrequency()
    {
        PI = 3.14159;
        /*
        double _resonFrequency = 5000;
        double _L = 0.0001;
        double _C = 0.0001;
        double _Rp = 500;
        double _r = 2;
        */
    }
    double calculateResonFrequency(double L, double C);
    int calculateResonResistor(double L, double C, double r);
    int calculateCap(double L, double resonFrequency);

};
double HighFrequency::calculateResonFrequency(double L, double C)
{
    //����г��Ƶ��
    return (1.0 / (2.0 * PI * (sqrt(L * C))));
}
int HighFrequency::calculateResonResistor(double L, double C, double r)
{
    //��֪��С����ݡ���� �����������г����� L / r * C
    return (L / r * C);

}
int HighFrequency::calculateCap(double L, double resonFrequency)
{
    //��֪��С�г��Ƶ�� ������� C = 1 / pow((2 * PI * f0),2) * L
    return (1 / pow((2 * PI * resonFrequency),2) * L);
}



void test()
{
    HighFrequency h;
    double resonFrequency, L, C, Rp, r;
    cin >> L >> C ;
    cout << "ֵΪ��" << h.calculateResonFrequency(L,C) << endl;
}

int main()
{
    test();
    system("pause");
    return 0;
}