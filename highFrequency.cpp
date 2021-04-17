#include <iostream>
#include <string>
#include <math.h>
using namespace std;
/*
4/16 今日简单写了几个计算式子
items:
1.可视化界面
2.输入已知值 求能求出来的值
3.可选择单位

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
    //已知电感、电容 计算谐振频率
    return (1.0 / (2.0 * PI * (sqrt(L * C))));
}
double HighFrequency::calculateResonResistor(double L, double C, double r)
{
    //已知电感、电容、电感 计算谐振电阻 L / r * C
    return (L / r * C);
}
double HighFrequency::calculateResonResistor(double L, double C, double Q)
{
    //已知电容、电感、Q值 计算谐振电阻 Rp = Q * sqrt(L/C)
    return (Q * sqrt(L / C));
}
double HighFrequency::calculateQ(double L, double C, double r)
{
    //已知电感、电容、内阻  计算Q值
    return ((1 / r) * sqrt(L / C));
}
double HighFrequency::calculateCap(double L, double resonFrequency)
{
    //已知电感、谐振频率 计算电容 C = 1 / pow((2 * PI * f0),2) * L
    return (1 / pow((2 * PI * resonFrequency),2) * L);
}
double HighFrequency::calculateBandWidth(double resonFrequency)
{
    //已知谐振频率 计算带宽 BW = 2 * f0
    return (2 * resonFrequency);
}
double HighFrequency::calculateEqualityResistor(double Rs, double Rp, double Rl)
{
    //已知信号源内阻、负载电阻、谐振电阻 计算电路等效电阻
    return ((Rp * Rl + Rs * Rl + Rs * Rp) / (Rs * Rl * Rp));
}
double HighFrequency::calculateLoadQ(double Re, double L, double C)
{
    //已知等效电阻、电感、电容 计算有载Q值
    return (Re * sqrt(C / L));
}

void test()
{
    HighFrequency h;
    double resonFrequency, L, C, Rp, r;
    cin >> L >> C ;
    cout << "值为：" << h.calculateResonFrequency(L,C) << endl;
}

int main()
{
    test();
    system("pause");
    return 0;
}