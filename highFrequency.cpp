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
    double calculateResonResistor(double L, double C, double r);
    double calculateResonResistor(double L,double C, double Q);
    double calculateQ(double L, double C, double r);
    double calculateCap(double L, double resonFrequency);
    double calculateBandWidth(double resonFrequency);
    double calculateEqualityResistor(double Rs, double Rp, double Rl);
    double calculateLoadQ(double Re, double L, double C);
};
double HighFrequency::calculateResonFrequency(double L, double C)
{
    //��֪��С����� ����г��Ƶ��
    return (1.0 / (2.0 * PI * (sqrt(L * C))));
}
double HighFrequency::calculateResonResistor(double L, double C, double r)
{
    //��֪��С����ݡ���� ����г����� L / r * C
    return (L / r * C);
}
double HighFrequency::calculateResonResistor(double L, double C, double Q)
{
    //��֪���ݡ���С�Qֵ ����г����� Rp = Q * sqrt(L/C)
    return (Q * sqrt(L / C));
}
double HighFrequency::calculateQ(double L, double C, double r)
{
    //��֪��С����ݡ�����  ����Qֵ
    return ((1 / r) * sqrt(L / C));
}
double HighFrequency::calculateCap(double L, double resonFrequency)
{
    //��֪��С�г��Ƶ�� ������� C = 1 / pow((2 * PI * f0),2) * L
    return (1 / pow((2 * PI * resonFrequency),2) * L);
}
double HighFrequency::calculateBandWidth(double resonFrequency)
{
    //��֪г��Ƶ�� ������� BW = 2 * f0
    return (2 * resonFrequency);
}
double HighFrequency::calculateEqualityResistor(double Rs, double Rp, double Rl)
{
    //��֪�ź�Դ���衢���ص��衢г����� �����·��Ч����
    return ((Rp * Rl + Rs * Rl + Rs * Rp) / (Rs * Rl * Rp));
}
double HighFrequency::calculateLoadQ(double Re, double L, double C)
{
    //��֪��Ч���衢��С����� ��������Qֵ
    return (Re * sqrt(C / L));
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