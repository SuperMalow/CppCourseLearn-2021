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
    int calculateResonResistor(double L, double C, double r);
    int calculateCap(double L, double resonFrequency);

};
double HighFrequency::calculateResonFrequency(double L, double C)
{
    //计算谐振频率
    return (1.0 / (2.0 * PI * (sqrt(L * C))));
}
int HighFrequency::calculateResonResistor(double L, double C, double r)
{
    //已知电感、电容、电感 计算内阻计算谐振电阻 L / r * C
    return (L / r * C);

}
int HighFrequency::calculateCap(double L, double resonFrequency)
{
    //已知电感、谐振频率 计算电容 C = 1 / pow((2 * PI * f0),2) * L
    return (1 / pow((2 * PI * resonFrequency),2) * L);
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